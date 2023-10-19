#include <stdio.h>
#include "main.h"

/**
 * _strncat - this is the main block or the Entry point
 *
 * Description: this is a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 *
 * @src: pointer to source input
 *
 * @n: most number of bytes from @src
 *
 * Return: a pointer to the resulting @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, i;

	d = 0;

	/*find size of dest array*/
	while (dest[d])
		d++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d + i] = src[i];
	/*null terminate dest*/
	dest[d + i] = '\0';

	return (dest);
}
