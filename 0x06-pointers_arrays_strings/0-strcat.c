#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @tem: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strcat(char *tem, char *src)
{
	int i, j;

	i = 0;
	

	while (tem[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		tem[i] = src[j];
		i++;
		j++;
	}
	tem[i] = '\0';
	return (tem);
}
	
