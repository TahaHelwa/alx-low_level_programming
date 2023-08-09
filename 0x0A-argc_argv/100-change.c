#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins needed to make change for a given amount of money
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings passed as arguments to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2) /* Check if exactly one argument was passed */
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]); /* Convert the argument to an integer */

	if (cents < 0) /* Check if the argument is negative */
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	while (cents > 0) /* Keep subtracting the largest coin value until the amount of change is 0 */
	{
		if (cents >= 25) /* Check if the amount of change is greater than or equal to a quarter */
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10) /* Check if the amount of change is greater than or equal to a dime */
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5) /* Check if the amount of change is greater than or equal to a nickel */
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2) /* Check if the amount of change is greater than or equal to a 2-cent coin */
		{
			cents -= 2;
			coins++;
		}
		else /* The amount of change must be 1 cent */
		{
			cents -= 1;
			coins++;
		}
	}

	printf("%d\n", coins); /* Print the number of coins needed followed by a new line */

	return (0);
}
