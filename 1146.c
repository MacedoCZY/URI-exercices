#include <stdio.h>

int main()
{
    int x;
    do
    {   
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            printf("%d", i);
            if (i < x)
                printf(" ");
        }   
        
        if (x != 0)
            printf("\n");
    }while(x != 0);
    
    return 0;
}
