#include "3-calc.h"
#include <stdio.h>
#include <stdlib>

/**
 * op_add - this function returns the sum of a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: this returns the sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - this function returns the difference of a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: this returns the difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - this function returns the product of a and b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: this returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - this function returns the dividend of a by b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: this returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - this function returns the remainder of the
 *
 * division of a by b
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: this returns the remainder of division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
