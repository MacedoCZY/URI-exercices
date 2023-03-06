#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    while (i < n)
    {
        float z, x, y;
        z = 0;
        scanf("%f %f", &x, &y);
        if(y == 0)
            printf("divisao impossivel\n");
        else
        {
            z = x/y;
            printf("%.1f\n", z);
        }
        i++;
    }
    return 0;
}
