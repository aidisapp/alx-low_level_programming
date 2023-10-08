#include <stdio.h>
/**
 * main - main block
 *
 * Description: this prints all possible different combinations of 3 digits.
 *
 * Numbers are separated by commas followed by a space.
 *
 * The three digits must be different.
 *
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 *
 * this is to print only the smallest combination of 3 digits.
 *
 * Numbers should be printed in ascending order with three digits.
 *
 * putchar can only be used to print.
 *
 * putchar can only be used up to 6 times.
 *
 * not allowedd to use variables of type char.
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
