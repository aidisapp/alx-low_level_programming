#include <stdio.h>
#include <stdlib.h>

/**
 * main- this is the function that prints the opcodes
 *
 * of its own main function
 *
 * @argc: this is the argument count
 *
 * @argv: this is the argument vector or array of arguments
 *
 * Return: this should be 0 if successful
 *
 * Error for negative number of bytes &
 *
 * Error for number of argument
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	int a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < num_bytes; a++)
	{
		if (a == num_bytes - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}

		printf("%02hhx ", arr[a]);
	}

	return (0);
}
