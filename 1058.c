/*
* Arquivo: 1060.c
* Implementa: solução para o problema "Números Positivos"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int x1, x2, x3, x4, x5;
    int pos, neg, imp, par;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    pos = 0; 
    neg = 0;
    if (x1 < 0)
        neg += 1;
    else
        if (x1 > 0)
            pos += 1;
    if (x2 < 0)
        neg += 1;
    else
        if (x2 > 0)
            pos += 1;
    if (x3 < 0)
        neg += 1;
    else
        if (x3 > 0)
            pos += 1;
    if (x4 < 0)
        neg += 1;
    else
        if (x4 > 0)
            pos += 1;
    if (x5 < 0)
        neg += 1;
    else
        if (x5 > 0)
            pos += 1;
     
     imp = 0;
     par = 0;        
    if (x1%2 == 0)
        par += 1;
    else
        imp += 1;
    if (x2%2 == 0)
        par += 1;
    else
        imp += 1;
    if (x3%2 == 0)
        par += 1;
    else
        imp += 1;
    if (x4%2 == 0)
        par += 1;
    else
        imp += 1;
    if (x5%2 == 0)
        par += 1;
    else
        imp += 1; 
        
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);
    return 0;
}
