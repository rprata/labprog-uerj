#include <stdio.h>
#include <string.h>

char * subtract(char * s, char * t)
{
	int k;
	static char result[255];
	memset(result, 0, sizeof(result));
	
	char * occur = strstr(s, t); // encontrou primeira ocorrencia
	
	if (occur == NULL)
	{
		return "";
	} 
	for (k = 0; *(s + k) != *occur; k++)
	{
		result[k] = s[k];
	}
	
	int final = k;
	
	for (k = final + strlen(t); *(s + k) != '\0'; k++)
	{
		result[k - strlen(t)] = s[k];
	}

	return result;
}

int main (void)
{
	char * res = subtract("Ola mundo, renan", "Ola");
	printf("%s\n", res);
	return 0;
}