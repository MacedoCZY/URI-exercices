/*
* Arquivo: 1048.c
* Implementa: solução para o problema "Aumento de Salário"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    float sal;
    scanf("%f", &sal);
    if (sal <= 400.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", (sal*0.15)+sal, sal*0.15);
    else
        if (sal <= 800.00)
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", (sal*0.12)+sal, sal*0,12);
        else
            if (sal <= 1200.00)
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", (sal*0.10)+sal, sal*0.10);
            else
                if (sal <= 2000.00)
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", (sal*0.07)+sal, sal*0.07);
                else
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", (sal*0.04)+sal, sal*0.04);
                    
    return 0;
}
