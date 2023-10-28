#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - this is the main block or the Entry point
 *
 * Description: this function searches a string for any of a set of bytes
 *
 * @s: this is the string to search in
 *
 * @accept: this is the set of bytes to search for
 *
 * Return: this shoudl surely return a pointer to the byte in s
 *
 * that matches one of the
 *
 * bytes in accept, or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *u = accept;

		while (*u != '\0')
		{
			if (*s == *u)
			{
				return (s);
			}
			u++;
		}
		s++;
	}

	return (NULL);
}
