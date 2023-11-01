#include <stdlib.h>
#include "main.h"

/**
 * word_count - this is the main block or the Entry point
 *
 * Description: this function counts the number of words in a string
 *
 * @strg: string to evaluate
 *
 * Return: number of words
 */

int word_count(char *strg)
{
	int word;
	int u;
	int v;

	word = 0;
	v = 0;

	for (u = 0; strg[u] != '\0'; u++)
	{
		if (strg[v] == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			v++;
		}
	}

	return (v);
}

/**
 **strtow - this is the main point or the Entry block
 *
 * Description: this function splits a string into words
 *
 * @str: this is the string to split
 *
 * Return: this returns a pointer to an array of strings
 *
 * if it is successful or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
