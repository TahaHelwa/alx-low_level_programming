#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes of src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j] && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}


	return (dest);
}
