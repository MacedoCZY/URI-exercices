#include <stdio.h>

int main()
{   
    int I, J;
    int l;
    l = 60;
    for (int k = 1; k <= 39; k += 3)
    {
        printf("I=%d J=%d\n", k, l);
        l = l - 5;
    }
    
    return 0;
}
