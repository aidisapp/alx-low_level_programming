#include <stdio.h>
#include "main.h"


/**
 * print_alphabet_x10 - this is the main point
 *
 * Description: this code prints 10 times the alphabet in lowercase
 *
 * followed by a new line
 *
 * Return: Always gives 0 at Pass or Success
 */

void print_alphabet_x10(void)
{
	char chh;
	int i;

	i = 0;

	while (i < 10)
	{
		chh = 'a';
		while (chh <= 'z')
		{
			_putchar(chh);
			chh++;
		}
		_putchar('\n');
		i++;
	}
}
