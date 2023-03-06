#include <stdio.h>
#define init 0.0
#define dfn 30.0

int main()
{
    double base = init, M[12][12];
    char carac[2];
    int p = 6, q = 5;
    
    scanf("%s", &carac);
    for(int x = 0; x <= 11; x++)
    {
        for(int y = 0; y <= 11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(int z = 7; z <= 11; z++)
    {
        for(int w = q; w <= p; w++)
            base += M[z][w];
        p++;
        q--;
    }
    if(carac[0]=='S')
        printf("%.1lf\n", base);
    else if(carac[0]=='M')
    {
        base /= dfn;
        printf("%.1lf\n", base);
    }
    return 0;
}