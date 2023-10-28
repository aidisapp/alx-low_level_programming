#include <stdio.h>
#include <stdlib.h>

/**
 * main - tis is the Entry point
 *
 * Description: this program prints the minimum number of coins
 *
 * to make change for an amount of money
 *
 * @argc: this is the argumwnt count
 *
 * @argv: this is the argument vector, the array itself
 *
 * Return: not exactly 1, print error and retrun 1
 *
 */

int main(int argc, char *argv[])
{
	int change, input;
	unsigned int a;
	char *b;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = strtol(argv[1], &b, 10);
	change = 0;

	if (!*b)
	{
		while (input > 1)
		{
			for (a = 0; a < sizeof(coins[a]); a++)
			{
				if (input >= coins[a])
				{
					change += input / coins[a];
					input %= coins[a];
				}
			}
		}
		if (input == 1)
			change++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", change);
	return (0);
}
