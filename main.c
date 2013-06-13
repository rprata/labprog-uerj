#include "labprog.h"

#define SZ 9

int array_test[] = {0, 1, 5, 10, 2, 20, 30, 9, 11};

int i;

int main (int argc, char ** argv)
{
	if (argc < 2)
	{
		printf("Erro. Insira um argumento\n");
		return 1;
	}

	quick_sort(array_test, 0, SZ - 1);
	shell_sort(array_test, SZ);
	bubble_sort(array_test, SZ - 1);

	for (i = 0; i < SZ; i++) printf("%d ", array_test[i]);
	printf("\n");
	
	int value = atoi(argv[1]);
	int res = binary_search(array_test, 0, SZ, value);

	if (res >= 0)
		printf("Valor %d foi encontrado\n", value);
	else
		printf("Valor %d nao foi encontrado\n", value);


	printf("fibonacci serie %d = %ld\n", value, fibonacci (value));

	return 0;

}