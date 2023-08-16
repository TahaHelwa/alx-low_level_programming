#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: Index of the first element for which the cmp function does not
 * return 0, -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return -1;

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return i;
	}

	return -1;
}
