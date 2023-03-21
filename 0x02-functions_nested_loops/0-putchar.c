#include<stdio.h>

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
	int cnt = 0;

	for (int cnt = 0; cnt < 8; cnt++)
		printf(s[cnt]);
	printf("\n");
	return (0);
}
