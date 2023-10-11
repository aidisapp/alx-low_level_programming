#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point or main block
 *
 * Description: print_alphabet prints all alphabets in lowercase
 *
 * Return: Always returns 0 at Success or pass
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);


	_putchar('\n');
}

