#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string to split.
 *
 * Return: Pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			len++;
	}

	words = malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	word_count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] && str[j] != ' '; j++)
				;
			words[word_count] = malloc(sizeof(char) * (j - i + 1));
			if (words[word_count] == NULL)
			{
				for (k = 0; k < word_count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < j - i; k++)
				words[word_count][k] = str[i + k];
			words[word_count++][k] = '\0';
			i = j;
		}
	}

	words[word_count] = NULL;

	return (words);
}
