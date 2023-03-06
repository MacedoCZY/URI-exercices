// files4.c
// exemplo de escrita em arquivo binário

#include <stdio.h>
#include <stdlib.h>

// tipo de dado a ser gravado no arquivo
typedef struct
{
    char nome[50];
    char endereco[50];
    char telefone[15];
} CONTATO;

int main()
{
    FILE *dados; // pontiero para o arquivo de dados
    char filename[80]; // nome do arquivo de dados
    CONTATO pessoa; // dados a serem gravados no arquivo

    printf("Nome do arquivo de dados\n");
    scanf("%s", filename);

    // tenta abrir para leitura e gravação no modo binário "wb+"
    // para wb+ se o arquivo não existir ele cria se já existir subistitui
    if ((dados = fopen(filename, "wb+")) == NULL)
    {
        printf("Erro: Arquivo não pode ser aberto!\n");
        exit(1);
    }

    getchar(); // limpar o buffer do teclado

    // ler os dados a serem gravados no arquivo
    printf("Nome: ");
    scanf("%[A-Za-z' ']", pessoa.nome);

    getchar();

    printf("Endereço: ");
    scanf("%[A-Za-z0-9' ',;.]", pessoa.endereco);

    getchar();

    printf("Telefone: ");
    scanf("%[0-9]", pessoa.telefone);

    // grava no arquivo
    fwrite(&pessoa, sizeof(CONTATO), 1, dados);
    fclose(dados);
    return 0;
}
