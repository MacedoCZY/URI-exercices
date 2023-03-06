/*
* Arquivo: 1044.c
* Implementa: solução para o problema "Múltiplos"
* Autor: Gustavo Macedo
* Data: 22/04/2021
**/

#include <stdio.h>
#include <math.h>

int main()
{
    double w, a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b > a)
    {
        w = a;
        a = b;
        b = w;
    }
    if (c > a)
    {
        w = a;
        a = c;
        c = w;
    }
    if (a < b)
    {
        w = a;
        a = b;
        c = w;
    }    
    if (a >= (b+c))
        printf("NAO FORMATA TRIANGULO\n");
    else
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
            printf("TRIANGULO RETANGULO\n");
        if (pow(a, 2) > pow(b, 2) + pow(c, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(a, 2) < pow(b, 2) + pow(c, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c )
            printf("TRIANGULO EQUILATERO\n");
        else 
            if (a == b || b == c || a == c)
                printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}                                                                          
