#include <stdio.h>

/**
 * main - Prints all the arguments passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings passed as arguments to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); /* Prints each argument followed by a new line */
	}

	return (0);
}
