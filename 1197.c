#include <stdio.h>

int main ()
{
    signed short velocidade, tempo;
    while (scanf("%hd %hd", &velocidade, &tempo) != EOF)
        printf("%d\n", velocidade*tempo*2);
    return 0;
}