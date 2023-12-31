#include <stdio.h>
/**
 * main - Entry point or main block
 *
 * Description: This prints all possible combinations of two two-digit numbers.
 *
 * Numbers range from 0 to 99.
 *
 * Two numbers should be separated by a space.
 *
 * All numbers should be printed with two digits. 1 should be printed as 01.
 *
 * Combination of numbers must be separated by a comma followed by a space.
 *
 * Combinations of numbers should be printed in ascending order.
 *
 * 00 01 and 01 00 are considered as the same combination.
 *
 * putchar function can only be used to print.
 *
 * putchar can only be used atmost 8 times.
 *
 * No variable of type char is allowed.
 *
 * Return: 0
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
