#include <stdio.h>

int main()
{
    int m, n, x, z;
    z = 0;
    x = 0;
    scanf("%d %d", &m, &n);
    while (m > 0 && n > 0)
    {
        
        if (m < n)
        {
            x = m;
            m = n;
            n = x;
        }
        for (int j = n; j <= m; j++)
        {
            z += j;
            printf("%d ", j);
        }
        printf("Sum=%d\n", z);
        scanf("%d %d", &m, &n);
        z = 0;                
    }
    return 0;
}
