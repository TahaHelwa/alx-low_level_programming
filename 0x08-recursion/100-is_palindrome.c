#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - helper function to recursively check if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the substring to check (starts at 0)
 * @end: the ending index of the substring to check (starts at strlen(s) - 1)
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end) /* base case: substring is a palindrome (start and end have met in the middle) */
	{
		return 1;
	}
	if (s[start] != s[end]) /* base case: substring is not a palindrome (first and last characters do not match) */
	{
		return 0;
	}
	return is_palindrome_helper(s, start + 1, end - 1); /* recursive case: check with next pair of characters */
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return is_palindrome_helper(s, 0, len - 1); /* check if substring is a palindrome */
}
