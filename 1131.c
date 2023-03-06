#include <stdio.h>

int main()
{
    int l, gm, gi, f, x, y, z, k, pt;
    gm = 0;
    gi = 0;
    k = 0;
    pt = 0;
    l = 0;
    do
    {
        z = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
            gi++;
        else
            if (y > x)
                gm++;
            else
                pt++;

        printf("novo grnal (1-sim 2-nao)\n");
        scanf("%d", &f);
        for (int i = 0; i <= 1;)
        {
            if (f != 1 && f != 2)
            {
                printf("novo granal (1-sim 2-nao)\n");
                scanf("%d", &f);
            }
            else
            {
                i++;
                k++;
            }
        }
        l++;
    }while (f <= 1);
    
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", l, gi, gm, pt);
    if (gi > gm)
        printf("Inter venceu mais\n");
    else
        if (gm > gi)
            printf("Gremio venceu mais\n");
        else
            printf("Não houve vencedor\n");
    
    return 0;   
}
