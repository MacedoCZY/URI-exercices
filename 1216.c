#include <stdio.h>

int main ()
{
	char nome[50];
	unsigned short contador = 0;
	double distancia, soma = 0;
	while (scanf(" %[^\n] %lf", nome, &distancia) != EOF)
	{
		soma += distancia;
		contador++;
	}
	printf("%.1lf\n", soma/contador);
    return 0;
}