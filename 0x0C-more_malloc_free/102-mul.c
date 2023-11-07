#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - this is the main block
 * Description: this function check to see if strings are valid nos
 * @str: this is the string to be considered
 * Return: Zero or 1 as the case may be
 */

int str_to_int(char *str)
{
	int result = 0;

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	int num1 = str_to_int(argv[1]);
	int num2 = str_to_int(argv[2]);

	int result = num1 * num2;

	char result_str[20];

	i = 0;

	while (result > 0)
	{
		result_str[i++] = (result % 10) + '0';
		result /= 10;
	}
	if (i == 0)
	{
		_putchar('0');
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(result_str[j]);
		}
	}
	_putchar('\n');
	return (0);
}
