#include <stdio.h>
#include <math.h>

int main()
{
    int n, z, a, b, c;
    scanf("%d", &n);
    a = 1;
    b = 1;
    c = 1;
    for (int i = 0; i < n; i++)
    {   
        printf("%d %d %d\n", a, b, c);
        a++;
        b = pow(a, 2);
        c = pow(a, 3);
    } 
    
    return 0;
}
