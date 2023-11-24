#include "main.h"

/**
 * binary_to_uint - this converts a binary number to unsigned int
 *
 * @b: this is the string containing the binary number
 *
 * Return: the converted number or 0 if there is an unconvertible character
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int my_decimal;

	unsigned int the_power;

	int length;

	my_decimal = 0;

	the_power = 1;

	length = 0;

	if (!b)
		return (0);

	while (b[length])
		length++;


	while (length > 0)
	{
		length--;
		if (b[length] != '0' && b[length] != '1')
			return (0);

		if (b[length] == '1')
			my_decimal += the_power;

		the_power *= 2;
	}

	return (my_decimal);
}
