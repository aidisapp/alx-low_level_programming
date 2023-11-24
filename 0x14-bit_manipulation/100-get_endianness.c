#include "main.h"

/**
 * get_endianness - this function checks the endianness of the system
 *
 * Description: This function determines the endianness of the system
 *
 * by checking the byte order of a multi-byte integer
 *
 * Return: will be 0 if big endian, and will be 1 if little endian
 */

int get_endianness(void)
{
	unsigned int count;

	char *endian;

	endian = (char *)&count;

	count = 1;

	return ((*endian == 1) ? 1 : 0);
}

/**
 * print_endianness - this print the endianness of the system
 *
 * @endianness: the argument for the printing
 *
 * Return: Nothing
 */

void print_endianness(int endianness)
{
	if (endianness == 1)
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
}
