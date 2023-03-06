#include <stdio.h>

int main()
{
    int n, X, Y, A;
    char S;
    int Z = 0;
    scanf("%d", &n);

    while (Z < n)
    {
        scanf("%d%c%d", &X, &S, &Y);

        if(X != Y)
        {
            if (S >= 65 && S <= 90)
                A = Y - X;

            else if (S >= 97 && S <= 122)
                A = X + Y;
       }

       else 
        A = X * Y;
        printf("%d\n", A);
        Z++;
    }
    return 0;
}