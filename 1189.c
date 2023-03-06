#include <stdio.h>
#define init 0.0
#define dfn 30.0

int main()
{
    double base = init, M[12][12];
    char carac[2];
    int p = 0,r = 4;
    scanf("%s", &carac);
    for(int x = 0; x <= 11; x++)
    {
        for(int y = 0; y <= 11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(int z = 1; z <= 10; z++)
    {
        if(z <= 5)
        {
            for(int w = 0; w <= p; w++)
                base += M[z][w];
            p++;
        }
        else if(z >= 6 )
        {
        for(int w = 0; w <= r; w++)
            base += M[z][w];
        r--;
        }
    }
    if(carac[0]=='S')
        printf("%.1lf\n",base);
    else if(carac[0]=='M')
    {
        base /= dfn;
        printf("%.1lf\n", base);
    }
    return 0;
}