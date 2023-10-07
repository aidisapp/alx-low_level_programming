#include <stdio.h>
/**
 * main - Enty point
 *
 * Description: Print all possible combinations fo single-digit numbers.
 *
 * The No.s must be separated by commas follwed by a space.
 *
 * We will use only putchar to print to console
 *
 * You can only use putchar up to four times only
 *
 * No variable of type `char`
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
																						i++;
																					}
																					putchar('\n');

																					return (0);
																				}
