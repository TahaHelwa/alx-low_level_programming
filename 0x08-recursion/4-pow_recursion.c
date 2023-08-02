#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* error case: y is negative */
	{
		return -1;
	}
	if (y == 0) /* base case: y is 0 */
	{
		return 1;
	}
	return (x * _pow_recursion(x, y - 1)); /* call with y - 1 until base case is reached */
}
