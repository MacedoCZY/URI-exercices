#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long unsigned int x, y, z, k, v, j;
    char xc[32], yc[32], r[32];
    
    while(scanf("%lu %lu", &x, &y)!= EOF)
    {   
        xc[0] = '\0';
        yc[0] = '\0';
        r[0] = '\0';
        j = 0;
        k = 0;
        z = 0;
        v = 0;
        
        for (int i = 31; i >= 0; i--)
        {
            z = x >> i;
            k = y >> i;
            
            if (z & 1)
                xc[i] = 1;
            else
                xc[i] = 0;
            
            if (k & 1)
                yc[i] = 1;
            else
                yc[i] = 0;

        }        
           
        for (int i = 31; i >= 0; i--)
        {
            if (xc[i] == 1 && yc[i] == 0 || xc[i] == 0 && yc[i] == 1)
                r[i] = 1;
            else
                r[i] = 0;
                 
        }

        
        for (int i = 31; i >= 0; i--)
        {
            j = sqrt(pow(i, 2));
            if (r[i] == 1)
                v += pow(2, j);       
        }
        printf("%lu\n", v);     
    } 
        
    return 0;
}
