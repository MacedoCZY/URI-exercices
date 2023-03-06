#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

#define TAM_NOME 80000
#define TAM_ENDE 100
#define TAM_FONE 15

//definição do registro de dados
typedef struct
{
    char nome[TAM_NOME];
    char conteudo[TAM_ENDE];
    char telefone[TAM_FONE];
} CONTATO;

FILE *dados;  //ponteiro para o arquivo de dados

//----------------------------
// Ordenação bolha em arquivo
//----------------------------
void bubbleSort(FILE *f)
{
    int i, j, n;
    CONTATO aux1, aux2;
    int sizeR = sizeof(CONTATO);

    // calcular o número de registros no arquivo
    fseek(f, 0, SEEK_END);
    n = ftell(f)/sizeR;

    for (i - 1; i < n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            // posiciona para fazer a leitura
            fseek(f, (j - 1)*sizeR, SEEK_SET);
            // lê os dados dos registros adjecentes para a memória
            fread(&aux1, sizeR, 1, f);
            fread(&aux2, sizeR, 1, f);
            // compara os resgistros pelo nome
            if (strcmp(aux1.nome, aux2.nome) > 0) // aux1 > aux2
            {
                // reposicionamento para poder trocar
                fseek(f, (j - 1)*sizeR, SEEK_SET);
                // troca aux1 e aux2
                fwrite(&aux2, sizeR, 1, f);
                fwrite(&aux1, sizeR, 1, f);
            }
        }
    }
}

//---------------------
//Inserção de registro
//---------------------
int insereRegistro()
{
    CONTATO a;
    fseek(dados, 0, SEEK_END);
    printf("\tInserir contato\n\n");
    getchar();
    printf("Nome: ");
    gets(a.nome);
    printf("Endereço: ");
    gets(a.conteudo);
    printf("Telefone: ");
    gets(a.telefone);
    fwrite(&a, sizeof(CONTATO), 1, dados);
    printf("\n\tContato inserido Tecle [ENTER]\n");
    getchar();
    return 0;
}


//--------------------
// lista de registros
//--------------------
int listaRegistro()
{
    CONTATO a;
    int n;

    fseek(dados, 0, SEEK_END); // SEEK_SET = inicio; SEEK_CUR = posição atual; SEEK_END = fim
    n = ftell(dados)/sizeof(CONTATO); // calcular o número do registros no arquivo
    bubbleSort(dados);
    rewind(dados);
    getchar();
    while (!feof(dados))
    {
        fread(&a, sizeof(CONTATO), 1, dados);
        if (!feof(dados))
        {
            printf("No. de registro: %lu/%d\n", ftell(dados)/sizeof(CONTATO), n);
            printf("Nome: %s\n", a.nome);
            printf("Tecle [ENTER] para o próximo registro...");
            getchar();
        }
    }
    return 0;
}
//-----------------
// função de busca
//-----------------
int buscaRegistro()
{
    CONTATO a;
    char chave[TAM_NOME];
    int count = 0;
    bubbleSort(dados);
    rewind(dados); // eposicionamento no incio do arquivo
    getchar(); //limpa o buffer do teclado
    rewind(dados);
    printf("\tBusca por nome\n");
    printf("Busca por: ");
    gets(chave);

    while(!feof(dados))
    {
        fread(&a, sizeof(CONTATO), 1, dados);
        if(!feof(dados))
        {
            if(!strcmp(a.nome, chave)) // achou
            {
                printf("Endereço: %s\n", a.conteudo);
                printf("Telefone: %s\n", a.telefone);
                printf("Tecle [ENTER]");
                getchar();
            }
        }
    }
    printf("Nome não encontrado!\n"); // não achou
    printf("Tecle [ENTER]");
    getchar();
    return 0;
}

//------------------------
// Alteração de registros
//------------------------
int alteraRegistro()
{
    CONTATO a;
    char chave[TAM_NOME];
    
    rewind(dados);
    printf("\tAlteração de dados\n\n");
    printf("Buscar por: ");
    gets(chave);
    getchar();
    
    while (!feof(dados))
    {
        fread(&a, sizeof(CONTATO), 1, dados);
        if (!feof(dados))
        {
            if (!strcmp(a.nome, chave)) // achou
            {
                printf("\n Digite os novos dados\n");
                printf("Novo endereço: ");
                gets(a.conteudo);
                fseek(dados, -sizeof(CONTATO), SEEK_CUR);
                fwrite(&a, sizeof(CONTATO), 1, dados);
                printf("\nRegistro alterado com sucesso!\n");
                printf("Tecle [ENTER]");
                getchar();
                return 0;
            }
        }
    }
    printf("Nome não encontrado.\n"); //não achou
    printf("Tecle [ENTER]");
    getchar();
    return 0;
}

//----------------------------------------
// Apagamento físico do arquivo por cópia
//----------------------------------------
int apagaRegistro()
{
    CONTATO a;
    FILE *TMP;
    char apaga;
    char chave[TAM_NOME];
    fpos_t position1, position2;
    
    getchar();
    rewind(dados);
    printf("Apagar registros\n");
    printf("Buscar por: ");
    gets(chave);
    
    while (!feof(dados))
    {
        fread(&a, sizeof(CONTATO), 1, dados);
        if (!feof(dados))
        {
            if (!strcmp(a.nome, chave)) // achou
            {
                printf("Endereço: %s\n", a.conteudo);
                printf("Telefone: %s\n", a.telefone);
                printf("\nConfirma apagamento ? (ATENÇÂO: OS DADOS APAGADOS NÃO PODERÃO MAIS SER RECULPERADOS) (s/n) >> ");
                getchar();
                if (toupper(apaga) == 'S')
                {
                    // volta para o início do registro a ser apagado
                    fseek(dados, -sizeof(CONTATO), SEEK_CUR);
                    fgetpos(dados, &position1);
                    if (!(TMP = fopen("agenda.tmp", "w")))
                    {
                        printf("Erro: Arquivotemporário não pode ser aberto!\n");
                        exit(1);
                    }
                    rewind(dados);
                    fgetpos(TMP, &position2);
                    while (!feof(dados))
                    {
                        fread(&a, sizeof(CONTATO), 1, dados);
                        if (!feof(dados) && (position1 != position2))
                        {
                            fwrite(&a, sizeof(CONTATO), 1, TMP);
                            fgetpos(TMP, &position2);   
                        }
                    }
                    // fecha e remove o arquivo original
                    fclose(dados);
                    fclose(TMP);
                    if (remove("agenda.dat") != 0);
                    {
                        printf("Erro: Arquivo não pode ser removido!");
                    }
                    // renomeia o arquivo TMP para .dat
                    if (rename("agenda.tmp", "agenda.dat") != 0)
                        printf("Erro: Arquivo temporário não pode ser renomeado!");
                    else
                    {
                        dados = fopen("agenda.dat", "rb+");
                        printf("Remoção realizada com sucesso!\n");
                    }
                }
            }
        }
    }
    return 0;
}

//------------
//Função main
//------------
int main()
{
    CONTATO a;
    FILE *texto;
    printf("Nome do aquivo\n");
    scanf("%s", a.nome);
    if ((texto = fopen(a.nome, "wb+")) == NULL) // testar se abre, obs "w" escrita "r" leitura
    {
        printf("Erro: O arquivo %s não pode ser aberto!\n", a.nome);
        exit(1);
    }

    printf("Buscar por nome do arquivo: \n");
    buscaRegistro(a.nome);
    apagaRegistro(a.nome);

    // fecha o arquivo
    if (fclose(dados))
    {
        printf("Erro: Não foi posivel fechar o arquivo de dados\n");
        exit(1);
    }
    return 0;
    
}