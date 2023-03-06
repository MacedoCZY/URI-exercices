#include <stdio.h>

int main()
{
    int x, a, g, d;
    a = 0,
    g = 0;
    d = 0;
    do
    {
        scanf("%d", &x);
        if (x == 1)
            a++;
        else
            if (x == 2)
                g++;
            else 
                if (x == 3)
                    d++;
            
    }while (x != 4);
    
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDisel: %d\n", a, g, d);

    return 0;
}
