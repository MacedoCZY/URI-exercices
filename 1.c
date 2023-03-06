/*
* Arquivo: 1049.c
* Implementa: solução para o problema "Animal"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>
#include <string.h>

int main()
{
    char n1[14];
    char n2[14];
    char n3[14];
    scanf("%14s %14s %14s", n1, n2, n3);
    
    if (strcmp(n1, "vertebrado") == 0)   
        if(strcmp(n2, "ave") == 0)
            if(strcmp(n3, "carnivoro") == 0)
                printf("aguia\n");
            else   
                printf("pomba\n");
        else
            if(strcmp(n3, "onivoro") == 0)
                printf("homem\n");
            else      
                printf("vaca\n");            
    else
        if(strcmp(n2, "inseto") == 0)
            if(strcmp(n3, "hematofago") == 0)
                printf("pulga\n");
            else
                printf("largata\n");           
        else
            if(strcmp(n3, "hematofago") == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
   
    return 0;
}
