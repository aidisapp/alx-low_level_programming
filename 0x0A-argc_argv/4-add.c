#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - this is the Entry point
 *
 * Description: this program prints add positive numbers
 *
 * @argc: this is the argument count
 *
 * @argv: this is the argument vector which is the array itself
 *
 * Return: should be 1, if not return 0 otherwise
 */

int main(int argc, char *argv[])
{
	int u, v, sum;

	(void)argv;
	sum = 0;
	if (argc > 1)
	{
		for (u = 1; u < argc; u++)
		{
			for (v = 0; argv[u][v] != '\0'; v++)
			{
				if (!isdigit(argv[u][v]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[u]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
