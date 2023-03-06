/*
* Arquivo: 1046.c
* Implementa: solução para o problema "Tempo de Jogo"
* Autor: Gustavo Macedo
* Data: 22/04/2021
**/

#include <stdio.h>

int main()
{
    int ini, fim;
    scanf("%d %d", &ini, &fim);
    
    if(ini > fim)
        printf("O JOGO DUROU %d HORA(S)\n", (24 - ini) + fim);
    else
        if(ini < fim)
            printf("O JOGO DUROU %d HORA(S)\n", fim - ini);
        else
            printf("O JOGO DUROU 24 HORA(S)\n");
            
    return 0;
}                                                                          
