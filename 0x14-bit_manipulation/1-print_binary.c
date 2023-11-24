#include "main.h"

/**
 * print_binary - this function prints the binary representation of a number
 *
 * @n: this is the unsigned long integer to be printed in binary
 *
 * Description: This function prints the binary representation of a number.
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
