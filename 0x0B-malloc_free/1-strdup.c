#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - this is the main block or Entry point
 *
 * Description: this function returns a pointer to a newly allocated
 *
 * space in memory, which contains a copy of the string
 *
 * as a parameter
 *
 * @str: the string to be duplicated
 *
 * Return: NULL if str is NULL, on success, returns a pointer to the
 *
 * duplicated string. if insufficient memory was available, returns NULL
 */

char *_strdup(char *str)
{
	int length = 0;
	int u;
	char *duplicate;

	duplicate = malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (u = 0; str[u]; u++)
		length++;

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (u = 0; str[u]; u++)
	{
		duplicate[u] = str[u];
	}

	return (duplicate);
}
