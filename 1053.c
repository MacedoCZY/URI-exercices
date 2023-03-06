/*
* Arquivo: 1059.c
* Implementa: solução para o problema "Números Pares"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main(void)
{
    int contador = 1; 

        while (contador <= 100) 
        {
            if (contador%2 == 0){
                printf("%d\n", contador); 
            }
            contador++; 
        }  

    return 0;
}
