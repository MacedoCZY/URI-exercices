#include <stdio.h>

int main()
{
    float x, z;
    int f;
    do
    {
        z = 0;
        for(int i = 0; i <= 1;)
        {
            scanf("%f", &x);
            if (x < 0 || x > 10)
                printf("nota invalida\n");
            else
            {
                z += x;
                i++;
            }
        }
        printf("media = %.2f\n", z/2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &f);
        for (int i = 0; i <= 1;)
        {
            if (f != 1 && f != 2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &f);
            }
            else
                i++;
        }
    }while (f <= 1);
    
    return 0;   
}
