#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
		for (j = 0; letters[j] != '\0'; j++)
			if (s[i] == letters[j])
			{
				s[i] = rot13[j];
				break;
			}

	return s;
}
