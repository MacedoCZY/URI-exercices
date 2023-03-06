#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mdc(unsigned int x, unsigned int y)
{
    int rest;
    do
    {
        rest = x%y;
        x = y;
        y = rest;
    }while(rest !=0);
    
    return x;
}

int main ()
{
	int N, n1, d1, n2, d2, num, den, div;
	char op;

	scanf("%d", &N);

	do
	{
		scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

		if(op == '+')
		{
			num = (n1*d2 + n2*d1);
			den = (d1*d2);
		}

		else if(op == '-')
		{
			num = (n1*d2 - n2*d1);
			den = (d1*d2);
		}

		else if(op == '*')
		{
			num = (n1*n2);
			den = (d1*d2);
		}

		else if(op == '/')
		{
			num = (n1*d2);
			den = (n2*d1);
		}

		div = mdc(num,den);

		printf("%d/%d = %d/%d\n", num, den, num/div, den/div);

		N--;
	} while (N>0);
	
	return 0;
}
