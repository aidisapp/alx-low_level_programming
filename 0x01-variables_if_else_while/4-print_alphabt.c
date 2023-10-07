#include <stdio.h>

/**
 * main - Entry point or main block
 * Description: Putchar to print all letters except the letter 'q' and 'e'.
 * Return: 0
 */

int main(void)
{
	char u = 'a';

	while (u <= 'z')
	{
		if (u != 'q' && u != 'e')
			putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
