#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - this function actually prints anything
 *
 * @format: this is a list of types of arguments passed to the function
 *
 * and they are:
 *
 * c: stands for char
 *
 * i: stands for integer
 *
 * f: float
 *
 * s: char *
 *
 * if the string is NULL, it would require printing (nil) instead
 *
 * Any other char should be ignored.
 */

void print_all(const char * const format, ...)
{
	va_list args_;
	char *str;

	int x = 0, printed = 0;

	va_start(args_, format);

	while (format && format[x])
	{
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(args_, int));
			break;
		case 'i':
			printf("%d", va_arg(args_, int));
			break;
		case 'f':
			printf("%f", va_arg(args_, double));
			break;
		case 's':
			str = va_arg(args_, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;

		default:
			printed = 1;
			break;
		}
		if (format[x + 1] && !printed)
			printf(", ");

		x++;
		printed = 0;
	}

	va_end(args_);
	printf("\n");
}
