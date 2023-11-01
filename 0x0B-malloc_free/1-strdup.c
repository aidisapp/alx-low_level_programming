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
	char *duplicateStr;
	unsigned int a;
	unsigned int b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++);

	duplicateStr = (char *)malloc(sizeof(char) * (a + 1));

	if (duplicateStr == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		duplicateStr[b] = str[b];

	duplicateStr[b] = '\0';

	return (duplicateStr);
}
