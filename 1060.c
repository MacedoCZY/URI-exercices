/*
* Arquivo: 1070.c
* Implementa: solução para o problema "Seis Números Ímpares"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int x, cont;
    scanf("%d", &x);
    
    for (cont = 0; cont <= 5;)
    {
        if(x%2 != 0)
        {
            printf("%d\n", x);
            cont++;
        }    
        x += 1;
    }
    
    return 0;
}
