#include "main.h"

/**
 * wildcmp_helper - helper function to recursively compare two strings with a wildcard character *
 * @s1: the first string to compare
 * @s2: the second string to compare, which may contain a * character
 * @star: 1 if the previous character in s2 was a *, 0 otherwise
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2, int star)
{
	if (*s1 == '\0' && *s2 == '\0') /* base case: end of both strings */
	{
		return 1;
	}
	if (*s2 == '*') /* recursive case: * character in s2 */
	{
		if (star) /* ignore multiple * characters in s2 */
		{
			return wildcmp_helper(s1, s2 + 1, star);
		}
		return wildcmp_helper(s1, s2 + 1, 1) || /* match remaining characters with * character in s2 */
			(*s1 != '\0' && wildcmp_helper(s1 + 1, s2, 0)); /* match next character in s1 without * character in s2 */
	}
	else if (*s1 == *s2) /* recursive case: matching characters */
	{
		return wildcmp_helper(s1 + 1, s2 + 1, 0); /* match next characters in both strings */
	}
	return 0; /* recursive case: non-matching characters */
}

/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical, otherwise returns 0
 * @s1: the first string to compare
 * @s2: the second string to compare, which may contain a * character
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return wildcmp_helper(s1, s2, 0); /* compare both strings with no previous * character */
}
