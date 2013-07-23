#include <stdio.h>
#include <string.h>

char * subtract(char * s, char * t, char * u) 
{
	char * p_char;
	static char result[255];
	memset(result, 0, sizeof(result));
	
	while ((p_char = strstr(s, t)) != NULL) 
	{
		strncat(result, s, strlen(s) - strlen(p_char));
		strcat(result, u);
		s = (p_char + strlen(t));
	}
	strcat (result, s); //no caso 
	return result;
}

int main (void) 
{
	char * s = "Joaquim estava enamorado pela esposa do Manoel, mas sua esposa Maria, nada sabia.";
	char * buf;
	buf = subtract(s, "esposa", "irma"); 

	printf("%s\n", buf);
	return 0;
}