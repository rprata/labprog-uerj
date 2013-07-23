#include <stdio.h>

int bits1minusbits0(int x)
{
	int i, val = x;
	int contador_1 = 0;

	for (i = 1; val > 0; val >>= i++) //conta o total de bits de um valor inteiro
	{
		if (val == 2)
		{
			i++;
			break;
		}
	}

	int total = i;

	for (i = 0; x <= x << i ; i++) //conta a quantidade de 1's
	{
		if ((x >> i & ~(~0 << 1)) == 1)
		{
			contador_1++;
		}
	}

	return 2*contador_1 - total; //total de 1 - total de 0

}

int main (void)
{
	printf("%d\n", bits1minusbits0(10)); //1010 = 0
	printf("%d\n", bits1minusbits0(11)); //1011 = 2
	printf("%d\n", bits1minusbits0(8)); //1010 = -2
	return 0;
}