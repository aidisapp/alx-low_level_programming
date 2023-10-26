#include "main.h"
#include <stdio.h>

/**
* factorial - this is the main block
*
*Description: this function returns the factorial of a number
*
* @n: this is the number that we'll calculate the factorial for
*
* Return: should be -1 if an error occurs or
*
* 1 for the factorial of zero
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
