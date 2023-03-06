#include <stdio.h>

int main()
{
    int x, z, k;
    k = 0;
    scanf("%d %d", &x, &z);
    while(x >= z)
    {
        scanf("%d", &z);
    }
    for(int i = 0; i <= z+1; i += x+1)
    {
        k++;
        i++;
    }
    printf("%d\n", k);
    
    return 0;
}
