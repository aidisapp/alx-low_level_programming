#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function prints numbers, followed by a new line
 *
 * @separator: this is the string to be printed between numbers
 *
 * @n: this is the number of integers passed to the function
 *
 * Return: No return for this function
 *
 * If separator is NULL, no printing
 *
 * Tt the end of the function, a new line is printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list prints;

	va_start(prints, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(prints, int));

		if (r < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(prints);

	printf("\n");
}
