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

	/*this first of all finds the size of dest array */
	while (dest[c])
		c++;

	/* then it iterate through each src array value without the null byte */
	for (c2 = 0; src[c2] ; c2++)
		/* then, it appends src[c2] to dest[c], overwritting the null byte in dest */
		dest[c++] = src[c2];

	return (dest);
}
