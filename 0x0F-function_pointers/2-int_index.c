#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
