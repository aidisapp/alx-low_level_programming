#include "main.h"
#include <stdio.h>

/**
 * is_prime - this is the Entry point
 *
 * Description: this function detects if an input number is a prime number
 *
 * @n: this is the input number
 *
 * @x: this is the iterator
 *
 * Return: 1 if n is a prime number or 0 if n is not a prime number
 */

int is_prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
	if (n == x)
		return (1);
	return (0);
	}

	return (0 + is_prime(n, x + 1));
}

/**
 * is_prime_number - this is the main block
 *
 * Description: this function detects if an input number is a prime number
 *
 * @n: this is the input number
 *
 * Return: 1 if n is a prime number or 0 if n is not a prime number
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
