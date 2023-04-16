#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings passed as arguments to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3) /* Check if the program received two arguments */
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* Convert the first argument to an integer */
	num2 = atoi(argv[2]); /* Convert the second argument to an integer */
	result = num1 * num2; /* Multiply the two numbers */

	printf("%d\n", result); /* Print the result followed by a new line */

	return (0);
}
