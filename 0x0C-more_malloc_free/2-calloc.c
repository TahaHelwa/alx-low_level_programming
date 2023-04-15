#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory
 *         NULL on failure or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero using memset() */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
