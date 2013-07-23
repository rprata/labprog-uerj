#include <stdio.h>


void hanoi (int discos, char from, char to, char aux)
{

	if (discos == 1)
		printf("Moveu de %c para %c\n", from, to);
	else
	{
		hanoi(discos - 1, from, aux, to);
		printf("Moveu de %c para %c\n", from, to);
		hanoi(discos - 1, aux, to, from);
	}
}

int main (void)
{
	hanoi(3, '1', '3', '2');
	return 0;
}