#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - this is the main block
 *
 * Description: this is the function that prints a string,
 *
 * and it is to be followed by a new line.
 *
 * @s: this is the pointer variable to string s
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
