#include "main.h"
#include <stdio.h>

/**
 * more_numbers - this is the Entry point or the main block
 *
 * Description: this function prints 10 times the numbers for 0 to 14
 *
 * Return: Always 0 at Success or Pass
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
					_putchar('1');
				_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
