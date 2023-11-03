#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - this is the main block or the Entry point
 *
 * Description: this function concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: the bytes of s2
 *
 * Return: on failure, should be NULL
 *
 * if NULL is passed, treat as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_1, length_2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_1 = strlen(s1);
	length_2 = strlen(s2);

	if (n >= length_2)
		n = length_2;

	result = malloc(length_1 + n + 1);

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
