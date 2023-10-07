#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the numbers of base 16 in lowercase.
 *
 * putchar can only be used not more than 3 times.
 *
 * Return: Always 0 (Success or Pass)
 */
int main(void)
{
	char v;
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	for (v = 'a'; v < 'g'; v++)
	{
		putchar(v);
	}
	putchar('\n');

	return (0);
}
