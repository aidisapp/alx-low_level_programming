#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - this function prints strings, followed by a new line
 *
 * @separator: this is the string to be printed between the strings
 *
 * @n: this represents the number of strings passed to the function.
 *
 * if the separator is NULL, it should not print
 *
 * print (nil) instead just if one of the strings is NULL
 *
 * then, print a new line at the end of the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_;
	unsigned int v;
	const char *my_string;

	va_start(args_, n);

	for (v = 0; v < n; v++)
	{
		my_string = va_arg(args_, const char *);

		if (my_string == NULL)
			printf("(nil)");
		else
			printf("%s", my_string);

		if (v < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(args_);

	printf("\n");
}
