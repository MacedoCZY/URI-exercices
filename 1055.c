/*
* Arquivo: 1061.c
* Implementa: solução para o problema "Tempo de um Evento"
* Autor: Gustavo Macedo
* Data: 25/04/2021
**/

#include <stdio.h>

int main()
{
    int id, ih, im, is, fd, fh, fm, fs, d, h, m, s;
    scanf("Dia %d", &id);
    scanf("%d : %d : %d\n", &ih, &im, &is);
    scanf("Dia %d", &fd);
    scanf("%d : %d : %d", &fh, &fm, &fs);
    
    s = fs-is;
    m = fm-im;
    h = fh-ih;
    d = fd-id;
    
    if (s < 0)
    {
        s += 60;
        m--;
    } 
    if (m < 0)
    {
        m += 60;
        h--;
    } 
    if (h < 0)
    {
        h += 24;
        d--;
    } 
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
  
  return 0;
}
