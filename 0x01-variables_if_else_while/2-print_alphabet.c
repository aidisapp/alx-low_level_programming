#include <stdio.h>
/**
 * main - Entry point (main block)
 * Description: putchar function to print the alphabet in lowercase
 * Return: Always 0, which is null
 */

int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
