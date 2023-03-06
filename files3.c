// files3.c
// exemplo de abertura de arquivo para leitura/escrita

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *texto;
    char filename[60];
    short num, sum = 0;

    // abertura do arquivo no modo leitura/escrita (modo "r+")
    // o arquivo deve existir para poder ser aberto no modo "r+"
    // caso contrário, ocorre erro de E/S
    printf("Nome do arquivo\n");
    scanf("%s", filename);
    if ((texto = fopen(filename, "r+")) == NULL)
    {
        printf("Erro: Arquico %s não pode ser abero!\n", filename);
        exit(1);
    }

    while (1)
    {
        // fgets só para string, logo usamos fscanf
        fscanf(texto, "%hd", &num); // lê cada valor do arquivo
        if (feof(texto))
            break;
        sum += num; // calcula o somatório dos números
    }
    printf("Soma dos números no arquivo = %hd\n", sum); // escreve na tela
    fprintf(texto, "%hd\n", sum); // grava no arquivo
    fclose(texto); // fecha o arquivo
    return 0;
}