#include <stdio.h>

int mdc(unsigned int x, unsigned int y)
{
    int rest;
    do
    {
        rest = x%y;
        x = y;
        y = rest;
    }while(rest !=0);
    
    return x;
}

int main(int argc, char **argv)
{
    int n, i = 1;
    scanf("%d", &n);
    while(i <= n)
    {
        int f1, f2, res;
        scanf("%d %d", &f1, &f2);
        res = mdc(f1, f2);
        printf("%d\n", res);
        
        i++;
    }
    
    return 0;
}
