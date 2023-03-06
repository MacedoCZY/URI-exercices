#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    do
    {
        scanf("%d", &x);
        if (x == 2002)
            printf("Acesso Permitido\n");
        else
            printf("Senha Invalida\n");
        
    }while (x != 2002);
    
    return 0;
}
