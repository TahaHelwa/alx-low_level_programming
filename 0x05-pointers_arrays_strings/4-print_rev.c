#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	for (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
