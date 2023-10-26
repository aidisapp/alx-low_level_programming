#include "main.h"
#include <stdio.h>

/**
 * _sqrt_major - this is the main block
 *
 * Description I: this function returns the natural square root of a number
 *
 * @n: this is the number for which to calculate the square root
 *
 * @u: this is the what we would call the iterator
 *
 * Return: if n doesnt have a natural square root, should be -1
 */

int _sqrt_major(int n, int u)
{
	if (u % (n / u) == 0)
	{
		if (u * (n / u) == n)
		{
			return (u);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _sqrt_major(n, (u + 1)));
}

/**
 * _sqrt_recursion - this is the Entry point
 *
 * Description II: this is the helper function to calculate square root
 *
 * @n: this is the original number
 *
 * Return: if n doesnt have a natural square root, should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
	return (0);
	}

	if (n == 1)
	{
		return (1);
	}

	return (_sqrt_major(n, 2));
}
