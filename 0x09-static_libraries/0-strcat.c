#include <stdio.h>
#include "main.h"

/**
 * _strcat - this is the main point or the Entry block
 *
 * Description: function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 *
 * @src: pointer to source input
 *
 * Return: a pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)

		dest[c++] = src[c2];

	return (dest);
}
