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
 * print_error_and_exit - prints an error message and exits
 *
 * with status code 98
 */

void print_error_and_exit(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * print_result - prints the result of a multiplication or '0'
 *
 * if the result is zero
 *
 * @result: the result to be printed
 */

void print_result(int result)
{
	char result_str[20]; /* Maximum 20 digits for result */
	int i = 0;
	int j;

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
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
}

/**
 * main - this is the main point or the Entry point
 *
 * Description: this function processes the arguments,
 *
 * validates them and performs integer multiplication
 *
 * @argc: thsi is the argument count
 *
 * @argv: this is the array of character pointers
 *
 * Return: will be zero when successful
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		print_error_and_exit();
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	if (num1 == -1 || num2 == -1)
	{
		print_error_and_exit();
	}

	result = num1 * num2;

	print_result(result);
	return (0);
}
