#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings passed as arguments to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc == 1) /* Check if no arguments were passed */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++) /* Loop through each argument */
	{
		for (j = 0; argv[i][j] != '\0'; j++) /* Loop through each character in the argument */
		{
			if (!isdigit(argv[i][j])) /* Check if the character is not a digit */
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]); /* Add the number to the sum */
	}

	printf("%d\n", sum); /* Print the sum followed by a new line */

	return (0);
}
