#include <stdio.h>
#include "main.h"

/**
 * _isdigit - this is the main block or the Entry point
 *
 * Description: this programme is to check if the numbers are 0 - 9
 *
 * @u: char to be checked
 *
 * Return: 1 if u is a digit or 0 is returned otherwise
 */

int _isdigit(int u)
{
	if (u >= '0' && u <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
