/*
* Arquivo: 1060.c
* Implementa: solução para o problema "Números Positivos"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    float x1, x2, x3, x4, x5, x6, med;
    int pos, neg;
    scanf("%f %f %f %f %f %f", &x1, &x2, &x3, &x4, &x5, &x6);
    if (x1 < 0)
        neg += 1;
    else
        if (x1 > 0){
            pos += 1;
            med += x1;
        }
    if (x2 < 0)
        neg += 1;
    else
        if (x2 > 0){
            pos += 1;
            med += x2;
        }
    if (x3 < 0)
        neg += 1;
    else
        if (x3 > 0){
            pos += 1;
            med += x3;
        }
    if (x4 < 0)
        neg += 1;
    else
        if (x4 > 0){
            pos += 1;
            med += x4;
        }
    if (x5 < 0)
        neg += 1;
    else
        if (x5 > 0){
            pos += 1;
            med += x5;
        }
    if (x6 < 0)
        neg += 1;
    else
        if (x6 > 0){
            pos += 1;
            med += x6;
    }
    med = med/pos;
    printf("%d valores positivos\n%.1f\n", pos, med);
    return 0;
}
