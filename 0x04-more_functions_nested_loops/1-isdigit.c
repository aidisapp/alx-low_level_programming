#include <stdio.h>
#include "main.h"

/**
 * _isdigit - this is the main block or the Entry point
 * Description: this programme is to check if the numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 1 if c is a digit or 0 is returned otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
