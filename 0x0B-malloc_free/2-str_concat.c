#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - this is the main block or the Entry point
 *
 * Description: this fucntion concatenates two strings
 *
 * @s1: first input string
 *
 * @s2: second input string
 *
 * Return: if passed, it will be at NULL and treated as an empty string
 *
 * if failed, should be NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int str_s1;
	unsigned int str_s2;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
		return (NULL);

	str_s1 = 0;
	str_s2 = 0;

	if (s1)
	{
		while (str_s1 < length1)
		{
			ptr[str_s1] = s1[str_s1];
			str_s1++;
		}
	}

	if (s2)
	{
		while (str_s1 < (length1 + length2))
		{
			ptr[str_s1] = s2[str_s2];
			str_s1++;
			str_s2++;
		}
	}

	ptr[str_s1] = '\0';

	return (ptr);
}
