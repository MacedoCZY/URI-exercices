#include <stdio.h>

int main()
{
    float I, J, x;
    int t, t1;

    for (I = 0, J = 1, x = 0, t = 0, t1 = 0; I < 2.2; J++)
    {
        if(t1 == 0)
            printf("I=%.0f J=%.0f\n", I, J);
        else
            printf("I=%.1f J=%.1f\n", I, J);
        
        t++;

        if(t == 3)
        {
            I += 0.2;
            x += 0.2;
            J = x;
            t = 0;

            t1++;
        }
        if(t1 == 5)
            t1 = 0;
    }
    return 0;
}
