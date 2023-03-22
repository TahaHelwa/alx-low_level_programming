#include "main.h"

/**
 * print_alphapet - utilizes on the function to print
 *	the alphabet a - z
 *
*/
int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
