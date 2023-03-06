#include <stdio.h>

int main()
{
    int z, p, I, J, w;
    z = 1;
    p = 7;
    w = 7;
    for (int k = 1; k <= 9;)
    {
        printf("I=%d J=%d\n", k, p);

        if (p < w-1)
        {
            w += 2;
            p = w;
        }
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
