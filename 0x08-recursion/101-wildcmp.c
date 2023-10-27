#include "main.h"
#include <stdio.h>

/**
 * wildcmp - this is the main block
 *
 * Description: this function compares two strings with wildcard support
 *
 * @s1: this represents the first string
 *
 * @s2: this represents the second string with wildcard *
 *
 * Return: 1 if the strings can be considered identical
 *
 * or 0 if they are not considered so
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}


	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
