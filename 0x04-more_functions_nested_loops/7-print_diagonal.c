#include "main.h"
#include <stdio.h>

/**
* print_diagonal - this is the main point or the Entry block
*
* Description: this function draws a diagonal line on the terminal
*
* @n: number of times the character \ should be printed
*
*Return: this will be 0 always if passed or successful
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
