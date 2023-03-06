//files1.c
// Exemplo de manipulação de arquivos em C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *texto; // ponteiro para arquivo de texto
    char filename[60];  // nomedo arquivo que vai ser aberto

    // abertura de arquivo para escrita
    // se o arquivo não existir vai ser criado
    // se já existe, será sobrescrito
    printf("Nome do arquivo\n");
    scanf("%s", filename);
    
    // teste saber se o arquivo foi aberto/criado com sucesso
    // quando abrir com "w" quer dizer que pode gravar arquivo porém não pode ler dele
    // usar o "w", caso o arquivo já exista será destruido e substituido pelo novo
    // para ler teria que fechar o arquivo de depois abrir com outro módulo
    if ((texto = fopen(filename, "w")) == NULL)
    {
        printf("Erro: Arquivo %s não pode ser aberto!\n", filename);
        exit(1);
    }

    // escreve texto no arquivo
    fprintf(texto, "Linha do texto\n");
    fprintf(texto, "Outra linha de texto\n");
    fprintf(texto, "\t\t\tKamiKirin\n");

    // fecha o arquivo (NÂO ESQUEÇA DESTE PASSO!)
    fclose(texto);
    return 0;
}