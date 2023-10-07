#include <stdio.h>
/**
 * main - Entry point or main block
 *
 * Description: putchar function prints in lowercase and then in uppercase.
 * Return: 0
 */

int main(void)
{
	char u = 'a';

	while (u <= 'z')
	{
		putchar(u);
		u++;
	}

	u = 'A';

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}

	putchar('\n');

	return (0);
}
