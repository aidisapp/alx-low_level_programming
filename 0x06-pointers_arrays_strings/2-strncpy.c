#include <stdio.h>
#include "main.h"

/**
 * _strncpy - this is the main point or the Entry block
 *
 * Description: this is a function that copies a string.
 *
 * @dest: pointer to destination input buffer
 *
 * @src: pointer to source input buffer
 *
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
