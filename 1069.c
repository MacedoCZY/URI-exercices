#include <stdio.h>
#include <string.h>
int main()
{
    int n, xi, c, r, s, t;
    char x[2];
    c = 0;
    r = 0;
    s = 0;
    t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %s", &xi, x);
        if (strcmp(x, "C") == 0)
            c += xi;
        else
            if (strcmp(x, "R") == 0)
                r += xi;
            else
                s += xi;
    }
    
    float pc, pr,ps;
    t = c + r + s;
    pc = (c*100.00)/t;
    pr = (r*100.00)/t;
    ps = (s*100.00)/t;
    
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", t, c, r, s, pc, pr, ps);
    
    return 0;
}
