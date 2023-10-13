#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - this is the main block or the Entry point
*
* Description: this function is set to print num except 2 and 4
*
* Return: Always void on Pass or Succes
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		_putchar(c);
	}

	_putchar('\n');
}
