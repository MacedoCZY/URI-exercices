#include <stdio.h>

int main()
{
    int k, n, m, x, y;
    scanf("%d", &k);
    while (k)
    {
        scanf("%d %d", &n, &m);
        for (int i = 1; i <= k; i++)
        {
            scanf("%d %d", &x, &y);
            if (x == n || y == m )
                printf("divisa\n");
            else
                if (x > n && y > m)
                    printf("NE\n");
                else
                    if (x < n && y > m)
                        printf("NO\n");
                    else
                        if (x > n && y < m)
                            printf("SE\n");
                        else
                            if (x < n && y < m)
                                printf("SO\n");
        }
        
        scanf("%d", &k);   
    }
    return 0;
}
