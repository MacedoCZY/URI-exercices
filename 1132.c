#include <stdio.h>

int main()
{
    int x, y, z, s;
    s = 0;
    z = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        z = x;
        x = y;
        y = z;
    }
    
    for (int i = x; i <= y; i++)
    {
        if (i%13 != 0)
            s += i;       
    }
    
    printf("%d\n", s);
    return 0;
}
