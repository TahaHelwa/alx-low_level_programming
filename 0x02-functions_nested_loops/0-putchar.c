#include"main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char s[] = "_putchar";
	int cnt;

	for (int cnt = 0; cnt < 8; cnt++)
		_putchar(s[cnt]);
	_putchar("\n");

	return (0);
}
