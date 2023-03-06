#include <stdio.h>

int main()
{
    int a, c, lig;
    scanf("%d %d", &a, &c);
    while (a != 0 && c != 0)
    {
        lig = 0;
        int j = 0;
        int x[c];
        for (int i = 1; i <= c; i++)
        {
            scanf("%d", &x[i]);
            if (j > 0)
            {
                if (x[i] < x[i-1])
                    lig += 2;
                else
                    lig++;
            }
            j++;
        }
        printf("%d\n", lig);
        
        scanf("%d %d", &a, &c);
    }
    return 0;
}
