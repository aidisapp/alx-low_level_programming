#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - this is the main block
 *
 * Description: this function check to see if strings are valid nos
 *
 * @str: this is the string to be considered
 *
 * Return: Zero or 1 as the case may be
 */

int is_valid_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);  /* Not a digit */
		}
		str++;
	}
	return (1);
}

/**
 * main - this is the main point or the Entry point
 * 
 * Description: this function prints buffer in hexa
 *
 * @buffer: the address of memory to print
 *
 * @size: the size of the memory to print
 *
 * Return: zero as the case may be
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2)
	{
		printf("Error\n");
		return (98);
	}

	unsigned long long result = strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);

	printf("%llu\n", result);

	return (0);
}
