#include "main.h"

/**
 * print_numbers - this is the main block or the Entry point
 *
 * Description: this function print_numbers from t 0-9
 *
 * Return: void (0) on success of pass
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
