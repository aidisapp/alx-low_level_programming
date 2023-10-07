#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this prints all numbers of base 10 beginning from 0.
 *
 * No variable of type char is allowed
 *
 * Can only use putchar to print to console.
 *
 * putchar is allowed just twice.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
