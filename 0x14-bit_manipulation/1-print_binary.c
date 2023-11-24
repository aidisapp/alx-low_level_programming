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
	int r, my_count;

	int bits;

	r = 0;

	my_count = 0;

	bits = sizeof(unsigned long int) * 8;

	for (r = bits - 1; r >= 0; r--)
	{
		if ((n >> r) & 1)
		{
			my_count = r;
			break;
		}
	}

	for (r = my_count; r >= 0; r--)
	{
		if ((n >> r) & 1)
			putchar('1');
		else
			putchar('0');
	}

	if (my_count == 0 && (n & 1) == 0)
		putchar('0');
}
