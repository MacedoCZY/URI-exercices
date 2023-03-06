/*
* Arquivo: 1047.c
* Implementa: solução para o problema "Tempo de Jogo com Minutos"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int hini, mini, hfim, mfim, hi, hf, h, m;
    scanf("%d %d %d %d", &hini, &mini, &hfim, &mfim);
    
    hi = (hini*60) + mini;
    hf = (hfim*60) + mfim;
    
    if (hi > hf)
    {
        h = ((1440 - hi) + hf)/60;
        m = ((1440 - hi) + hf)%60;
    }
    else
        if (hi < hf)
        {   
            h = (hf - hi)/60;
            m = (hf - hi)%60;
        }
        else
            if ( hi == hf)
        {   
            h = ((hi+1440) - hf)/60;
            m = ((hi+1440) - hf)%60;
        }
            
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
            
    return 0;
}         
