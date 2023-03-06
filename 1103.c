#include <stdio.h>

int abs(int a)
{
    if (a < 0)
        return -a;
}
int main()
{
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    while((h1 || m1 || h2 || m2)!= 0)
    {
        if (h1*60+m1 > h2*60+m2)
            printf("%d\n", abs((((h1*60)+m1)-1440)-((h2*60)+m2)));
        else
            printf("%d\n", abs(((h1*60)+m1)-((h2*60)+m2)));
        
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }
    return 0;
}
