/*
* Arquivo: 1065.c
* Implementa: solução para o problema "Pares entre Cinco Números"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int x1, x2, x3, x4, x5;
    int pos;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    if (x1%2 == 0)
        pos += 1;
    if (x2%2 == 0)
        pos += 1;
    if (x3%2 == 0)
        pos += 1;
    if (x4%2 == 0)
        pos += 1;
    if (x5 %2 == 0)
        pos += 1;
    
    printf("%d valores pares\n", pos);
    return 0;
}
