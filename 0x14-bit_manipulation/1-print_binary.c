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
	int shift;

	int flag;

	shift = sizeof(unsigned long int) * 8 - 1;

	flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		unsigned long int check = n >> shift;

		if (check & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		shift--;
	}
}
