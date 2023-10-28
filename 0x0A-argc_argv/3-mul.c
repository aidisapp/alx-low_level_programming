#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the Entry point
 *
 * Description: this program multiplies two numbers
 *
 * @argc: this is the argument count
 *
 * @argv: this is the argument vector whcih is the array itself
 *
 * Return: if successful, should be 0
 */

int main(int argc, char *argv[])
{
	int result_, n1, n2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result_ = n1 * n2;

	printf("%d\n", result_);
	return (0);
}
