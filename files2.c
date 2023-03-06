// files2.c
// exemplo de leitura em arquivos de texto em C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *texto; // ponteiro para o arquivo de texto
    char filename[60]; // nome do arquivo a ser aberto
    // linha de texto a ser lida do arquivo, o tamnaho é o tamanho máximo de carc nas linhas
    char linha[70];

    // abrir o arquivo somente para leitura
    // o arquvio tem de existir para poder ser aberto
    // caso contrário, ocorre erro de E/S
    printf("Nome do aquivo\n");
    scanf("%s", filename);
    if ((texto = fopen(filename, "r")) == NULL) // testar se abre, obs "w" escrita "r" leitura
    {
        printf("Erro: O arquivo %s não pode ser aberto!\n", filename);
        exit(1);
    }

    // lê o arquivo texto
    // este while verifica para cada linha lida seu final para poder parar
    while (1)
    {
        fgets(linha, 70, texto);
        if (!feof(texto))
            printf("%s", linha); // imprime na tela cada linha do arquivo
        else    
            break;
    }
    printf("\n");
    fclose(texto); // fecha o arquivo
    return 0;
}