#include <stdio.h>

int main()
{
    while(1)
    {
        int n,w;
        scanf("%d",&n);
        if(n == 0) 
            break;

        w = 0;
        int i, h[n];
        for(i = 0; i<n; i++)
        {
            scanf("%d", &h[i]);
        }
        for(i = 1; i < n-1; i++)
        {
            if(h[i] > h[i-1] && h[i] > h[i+1] || h[i] < h[i-1] && h[i] < h[i+1]) 
                w++;
        }
        if(h[0] > h[1] && h[0] > h[n-1] || h[0] < h[1] && h[0] < h[n-1]) 
            w++;
        if(h[n-1] > h[n-2] && h[n-1] > h[0] || h[n-1] < h[n-2] && h[n-1] < h[0]) 
            w++;

        printf("%d\n",w);
    }

    return 0;
}
