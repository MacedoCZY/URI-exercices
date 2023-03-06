#include <stdio.h>
#include <string.h>

int main ()
{
  char m[1100], aux;
  int n;
  int i, j, t, tm;

  scanf("%d", &n);

  while (n)
  {
    scanf(" %[^\n]", m);

    t = strlen(m);
    tm = t/2;

    for (i = 0; i < t; i++ )
      if ((m[i] >= 'A' && m[i] <= 'Z') || (m[i] >= 'a' && m[i] <= 'z'))
        m[i] = m[i] + 3;

    for (i = 0, j = t - 1; i < tm; i++, j--)
    {
      aux = m[j];
      m[j] = m[i];
      m[i] = aux;
    }
    
    for (i = tm; i < t; i++ )
      if ((m[i] >= 32 && m[i] <= 176 ))
        m[i] = m[i] - 1;
    
    printf("%s\n", m);

    memset(m, 0 , sizeof(m));

    n--;
  }
  
  return 0;
}
