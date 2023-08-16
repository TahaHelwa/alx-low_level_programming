#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description: This function takes a pointer to an array, the size of the
 * array, and a pointer to a function. It iterates over each element of the
 * array and executes the provided function on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
		action(array[i]);
}
