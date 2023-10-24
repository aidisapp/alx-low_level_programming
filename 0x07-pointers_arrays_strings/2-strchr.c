#include <stdio.h>
#include "main.h"

/**
 * _strchr - this is the Entry point or the main block
 *
 * Description: this function is setup to locate a character in a string
 *
 * @s: this is the string to search in
 *
 * @c: this depicts the character to locate
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
