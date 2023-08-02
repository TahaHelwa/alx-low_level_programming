#include "main.h"

/**
 * sqrt_helper - helper function for calculating square root recursively
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n) /* error case: n does not have a natural square root */
	{
		return -1;
	}
	if (i * i == n) /* base case: i is the square root of n */
	{
		return i;
	}
	return sqrt_helper(n, i + 1); /* call with i + 1 until base case is reached */
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* error case: n is negative */
	{
		return -1;
	}
	return sqrt_helper(n, 0); /* start with i = 0 */
}
