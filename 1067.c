#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        float x, y, z;
        scanf("%f %f %f", &x, &y, &z);
        printf("%.1f\n", ((x*2)+(y*3)+(z*5))/10);
    }

    return 0;
}
