#include <stdio.h>
#define dfn 66.0
#define init 0.0

int main()
{
    double base = init, M[12][12];
    char carac[2];
    int p = 11;

    scanf("%s", carac);
    for(int x = 0; x <= 11; x++)
    {
        for(int y = 0; y <= 11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(int z = 1; z <= 11; z++)
    {
        for(int w = 11; w >= p; w--)
            base += M[z][w];
        p--;
    }
    if(carac[0] == 'S')
        printf("%.1lf\n", base);
    else if(carac[0] == 'M')
    {
        base /= dfn;
        printf("%.1lf\n", base);
    }
    return 0;
}