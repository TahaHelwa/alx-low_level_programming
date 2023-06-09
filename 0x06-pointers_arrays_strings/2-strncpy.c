#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*we iterate over the characters of the src string and put it in dest*/
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (; i < n; i++)
        	dest[i] = '\0';

	return (dest);
}
