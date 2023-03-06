/*
* Arquivo: 1051.c
* Implementa: solução para o problema "Imposto de Renda"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    float sal;
    scanf("%f", &sal);
    if (sal <= 2000.00)
        printf("Isento\n");
    else    
        if (sal <= 3000.00)
            printf("R$ %.2f\n", (sal-2000.00)*0.08); 
        else
            if (sal <= 4500.00)
                printf("R$ %.2f\n", (1000*0.08)+(sal-3000.00)*0.18);
            else
                if (sal > 4500.00)
                    printf("R$ %.2f\n", (1000*0.08)+(1500*0.18)+(sal-4500.00)*0.28);
                    
    return 0;   
}
