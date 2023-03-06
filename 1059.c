/*
* Arquivo: 1067.c
* Implementa: solução para o problema "Números Ímpares"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int x, imp;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (i%2 != 0)
            printf("%d\n", i);   
    }
    
    return 0; 
}
