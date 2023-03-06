#include <stdio.h>

int main()
{
	int b, n, d, c, v, x;
	scanf("%d %d", &b, &n);
	while(b != 0 && n != 0)
	{
	    x = 0;
	    int r[b];
	    for (int i = 1; i <= b; i++)
	        scanf("%d", &r[i]);
        
        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d %d", &d, &c, &v);
            r[d] -= v;
            r[c] += v;
	    }

        for (int i = 1; i <= b; i++)
        {
            if (r[i] < 0)
            {   
                x = 1;
                break;
            }
        }
        
        if (x == 1)
            printf("N\n");
        else
            printf("S\n");
            
    	scanf("%d %d", &b, &n);
	}
	return 0;
}
