#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings passed as arguments to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
