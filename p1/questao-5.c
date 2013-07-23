#include <stdio.h>
#include <string.h>

void inverteString(char * str, int n)
{
	int i = 0;
	for (i = n; i > -1; i--)
	{
		putchar(str[i]);
	}
}

int encontraToken(char * s)
{
	char token[255];
	int i = 0, contador = 0;
	memset(token, 0, sizeof(token));
	char c;

	while ((c = getchar()) != EOF)
	{

		if (c == '\t' || c == '\n' || c == ' ') 
		{
			if (i > 0)
			{	
				if (strcmp(s, token) == 0)
				{
					contador++;
				}
				inverteString(token, i - 1);
				printf(" ");
				memset(token, 0, sizeof(token));
				i = 0;
			}
		}
		else
		{
			token[i] = c;
			i++;
		}
	}
	//imprime a ultima palavra
	if (strcmp(s, token) == 0)
	{
		contador++;
	}
	inverteString(token, i - 1);
	printf("\n");
	printf("Quantidade que %s aparece: %d\n", s, contador);

}

int main (void)
{
	encontraToken("ola");
	printf("\n");
	return 0;
}