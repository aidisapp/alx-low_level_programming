#include <stdio.h>
#include "main.h"

/**
 * _strstr - this is the main block or the Entry point
 *
 * Description: this function locates a substring in a string
 *
 * @haystack: this is the string to search in
 *
 * @needle: this is the substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 *
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*nee != '\0' && *hay == *nee)
		{
			hay++;
			nee++;
		}

		if (*nee == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
