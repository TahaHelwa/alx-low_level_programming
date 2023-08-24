#include <stdio.h>

/**
 * called_first - prints a message before the main function is executed
 */
void __attribute__((constructor)) called_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
