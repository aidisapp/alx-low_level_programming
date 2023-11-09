#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this function prints a name
 *
 * @name: this is the name that we wish to print
 *
 * @f: this is the function pointer that we would use to determine
 *
 * how we want the name printed
 *
 * Return: thsi returns nothing basically
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
