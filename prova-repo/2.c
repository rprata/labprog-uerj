#include <stdio.h>

int mdc(unsigned int a, unsigned int b) //mdc recursivo
{

	if (b == 0)
		return a;
	else
		return mdc(b, a % b);
}

int list_mdc(unsigned int A[], int n) //solucao por programacao dinamica (otimizado)
{
	int result[n][n];
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				result[i][j] = 0;
			else
				result[i][j] = mdc(A[i], A[j]);
		}
	}

	int max_sz = result[1][2];

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (result[i][j] > 0 && result[i][j] < max_sz)
				max_sz = result[i][j];
		}
	}

	return max_sz;

}

int main (void) 
{
	int A[] = {14, 7, 28, 14};
	int res = list_mdc(A, 4);

	printf("%d\n", res);
	return 0;
}