#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_to_int - this is the main block
 *
 * Description: this function changes the string to integer
 *
 * @str: the string to be changed
 *
 * Return: would always be the result.
 */

int str_to_int(char *str)
{
	int result = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (-1);
		}
		result = result * 10 + (str[i] - '0');
	}
	return (result);
}

/**
 * main - this is the main point or the Entry point
 *
 * Description: this function processes the arguments, validates then
 *
 * validates them and performs integer multiplciation
 *
 * @argc: thsi is the argument count
 *
 * @argv: this is the array of character pointers
 *
 * Return: will be zero when successful
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3 || str_to_int(argv[1]) == -1 || str_to_int(argv[2]) == -1)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	result = str_to_int(argv[1]) * str_to_int(argv[2]);

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
	char result_str[20];
		int i = 0;
		int j;

		while (result > 0)
		{
			result_str[i++] = (result % 10) + '0';
			result /= 10;
		}

		for (j = i - 1; j >= 0; j--)
		{
			_putchar(result_str[j]);
		}
	}

	_putchar('\n');
	return (0);
}
