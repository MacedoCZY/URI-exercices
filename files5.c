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

    // tenta abrir para leitura e gravação no modo binário "rb+"
    // para rb+ o arquivo deve existir ou a de ocorrer erro
    if ((dados = fopen(filename, "rb+")) == NULL)
    {
        printf("Erro: Arquivo não pode ser aberto!\n");
        exit(1);
    }

    // ler os dados armazenados no arquivo
    fread(&pessoa, sizeof(CONTATO), 1, dados);
    printf("Dados armazenados:\n");
    printf("Nome: ");
    printf("%s\n", pessoa.nome);
    printf("Endereço: ");
    printf("%s\n", pessoa.endereco);
    printf("Telefone: ");
    printf("%s\n", pessoa.telefone);

    // fecha o arquivo
    fclose(dados);
    return 0;
}
