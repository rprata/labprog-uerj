#include <stdio.h>

int countpairsofbits(int x)
{
	int i;
	int contador = 0;
	for (i = 1; x <= x << i; i++) // 3 = 11 em binario
	{
		if ((x >> (i - 1) & ~(~0 << 2)) == 3)
		{
			contador++;
		}
	}

	return contador;

}

int main (void)
{
	printf("%d\n", countpairsofbits(123));
	return 0;
}