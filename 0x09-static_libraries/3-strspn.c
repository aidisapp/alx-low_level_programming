#include <stdio.h>
#include "main.h"

/**
 * _strspn - this is the main block or the Entry point
 *
 * Description: this function is to get the length of a prefix substring
 *
 * @s: this represents the string to search in
 *
 * @accept: this will stand for characters to search for
 *
 * Return: The number of bytes in the initial segment of s
 *
 * and this consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s)
	{
		char *a = accept;
		int is_match = 0;

		while (*a)
		{
		if (*s == *a)
		{
			is_match = 1;
			break;
		}
		a++;
		}

	if (is_match)
	length++;
	else
	break;

	s++;
	}

	return (length);
}
