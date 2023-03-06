/*
* Arquivo: 1052.c
* Implementa: solução para o problema "Mês"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x == 1)
        printf("January\n");
    else
        if (x == 2)
            printf("February\n");
        else
            if (x == 3)
                printf("March\n");
            else
                if (x == 4)
                    printf("April\n");
                else
                    if (x == 5)
                        printf("May\n");
                    else
                        if (x == 6)
                            printf("June\n");
                        else
                            if (x == 7)
                                printf("July\n");
                            else
                                if (x == 8)
                                    printf("August\n");
                                else
                                    if (x == 9)
                                        printf("September\n");
                                    else
                                        if (x == 10)
                                            printf("Octorber\n");
                                        else
                                            if (x == 11)
                                                printf("November\n");
                                            else
                                                printf("December\n");
    
    return 0;       
}
