/*
* Arquivo: 1070.c
* Implementa: solução para o problema "Seis Números Ímpares"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/


#include <stdio.h>


int main(){
    int x, y, z;
    scanf("%d %d", &x, &y);

    if(x>y)
    { 
        z = x;
        x = y;
        y = z;
    }
    x++;
    if(x%2==0) 
        x++;

    int q = 0;

    for(int i =x;i<y;i=i+2)
    {
        q = q + i;
    }
    
    printf("%d\n", q);
    return 0;
}
