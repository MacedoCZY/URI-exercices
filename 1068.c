#include <stdio.h>

int main()
{
    int x[100], z, c;
    z = 0;
    c = 0;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] > z)
        {
            z = x[i];
            c = i;
        }
    }
    
    printf("%d\n%d\n", z, c);
    return 0;
}
