#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the members of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the values of the members of a struct dog.
 * If an element of the struct is NULL, it prints "(nil)" instead of the element.
 * If the pointer to the struct is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
