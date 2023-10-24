#include "main.h"

/**
 * _memset - this is the main block or the Entry point
 *
 * Description: this function fill memory with a constant byte
 *
 * @s: this is the pointer to the memory area to be filled
 *
 * @b: this is the constant byte to fill the memory with
 *
 * @n: for number of bytes to be filled
 *
 * Return: this should return the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}
