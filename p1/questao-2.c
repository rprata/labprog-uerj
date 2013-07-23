#include <stdio.h>

unsigned long fibonacci_rec (unsigned int n)
{
  return n <= 1 ? n : fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

int main (void)
{	
	int i;
	
	for (i = 0; i < 20; i++)
	{
		printf("%ld ", fibonacci_rec(i)); //imprime esses 20 primeiros termos 
	}

	printf("\n");
	
	return 0;
}