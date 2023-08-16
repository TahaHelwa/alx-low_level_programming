#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to the name string
 * @f: Pointer to the function that prints the name
 *
 * Description: This function takes a pointer to a name string and a pointer to
 * a function that prints the name. It calls the provided function and passes
 * the name as an argument to print it.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
