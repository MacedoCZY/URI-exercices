#include <stdio.h>

int main()
{
    int i, n, z;
    i = 1;
    z = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            for (int j = x-1; j > y; j--)
                if (j%2 != 0)
                    z += j;
        }
        else
        {
            for (int j = x+1; j < y; j++)
                if(j%2 != 0)
                    z += j;
        }
        printf("%d\n", z); 
        z = 0;
        i++;              
    }
    return 0;
}
