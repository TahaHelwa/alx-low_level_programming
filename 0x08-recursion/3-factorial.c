#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /* error case: n is negative */
	{
		return -1;
	}
	if (n == 0) /* base case: n is 0 */
	{
		return 1;
	}
	return (n * factorial(n - 1)); /* call with n - 1 until base case is reached */
}
