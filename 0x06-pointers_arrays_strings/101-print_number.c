#include "main.h"
#include <stdio.h>

/**
 * print_number - this is the main block or the Entry point
 *
 * Description: this function prints an integer.
 *
 * @n: The integer to be printed.
 *
 * Return: this would be 0 always
 */

void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar('-');
		numb = -numb;
	}

	if ((numb / 10) > 0)
		print_number(numb / 10);

	_putchar((numb % 10) + '0');
}
