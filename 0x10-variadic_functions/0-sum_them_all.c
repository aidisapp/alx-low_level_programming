#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this function returns the sum of all its parameters
 *
 * @n: this represents the number of parameters to be summed
 *
 * Return: this will return the result
 *
 * but returns 0 if n is equal to zero
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args_;
	unsigned int a;
	int add;
	
	if (n == 0)
		return (0);

	add = 0;

	va_start(args_, n);

	for (a = 0; a < n; ++a)
	{
		add += va_arg(args_, int);
	}

	va_end(args_);

	return (add);
}
