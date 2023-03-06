/*
* Arquivo: 1044.c
* Implementa: solução para o problema "Múltiplos"
* Autor: Gustavo Macedo
* Data: 22/04/2021
**/

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (((A%B) == 0) || ((B%A == 0)))
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
        
    return 0;
}
