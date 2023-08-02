#include "main.h"

/**
 * is_divisible - helper function to check if a number is divisible by any number from 2 to sqrt(n)
 * @n: the number to check for divisibility
 * @i: the current divisor to check (starts at 2)
 *
 * Return: 1 if n is divisible by i, 0 otherwise
 */
int is_divisible(int n, int i)
{
	if (i * i > n) /* base case: n is prime (not divisible by any number from 2 to sqrt(n)) */
	{
		return 0;
	}
	if (n % i == 0) /* base case: n is not prime (divisible by i) */
	{
		return 1;
	}
	return is_divisible(n, i + 1); /* recursive case: check with i + 1 until base case is reached */
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* base case: n is not prime (less than or equal to 1) */
	{
		return 0;
	}
	return !is_divisible(n, 2); /* check if n is divisible by any number from 2 to sqrt(n) */
}
