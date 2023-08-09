#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings passed as arguments to the program
 *
 * Return: 0-success, non-zero-fail.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
