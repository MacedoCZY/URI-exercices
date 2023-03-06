#include <stdio.h>

int main()
{
    int z, p, I, J;
    z = 1;
    p = 7;
    for (int k = 1; k <= 9;)
    {
        printf("I=%d J=%d\n", k, p);
        if (p <= 5)
            p = 7;
        else
            p--;
            
        if (z > 2)
        {
            k += 2;
            z = 0;
        }
        z++;          
    }

    return 0;
}
