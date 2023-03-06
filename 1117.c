#include <stdio.h>

int main()
{
    float z, x, y;
    int i;
    i = 1;
    z = 0;
    do
    {
        scanf("%f", &x);
        if (x < 0 || x > 10)
            printf("nota invalida\n");
        else
        {
            z += x;
            i++;
        }
     }while (i <= 2);          
     printf("media = %.2f\n", z/2);
     return 0;   
}
