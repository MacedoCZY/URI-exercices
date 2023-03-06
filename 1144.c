#include <stdio.h>
#include <math.h>

int main()
{
    int w, j, n, z, b, c;
    scanf("%d", &n);
    b = 1;
    c = 1;
    j = 0;
    for (int a = 1; a <= n; a++)
    {   
        b = pow(a, 2);
        c = pow(a, 3);
        z = b + 1;
        w = c + 1;
        printf("%d %d %d\n", a, b, c);
        printf("%d %d %d\n", a, z, w);
    } 
    
    return 0;
}
