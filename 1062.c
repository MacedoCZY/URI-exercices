#include <stdio.h>

int main()
{
    int x, y, in, out;
    scanf("%d", &x);
    in = 0;
    out = 0;
    for (int i = 1; i <= x; i++)
    {
        scanf("%d", &y);   
        if (y >= 10 && y <= 20)
            in++;
        else
            out++;
              
     }   
    
    printf("%d in\n%d out\n", in, out);
    return 0;
}
