#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	/*find the size of the dest array*/
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
