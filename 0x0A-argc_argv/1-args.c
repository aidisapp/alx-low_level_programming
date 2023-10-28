#include <stdio.h>
#include "main.h"

/**
 * main - this is the Entry block
 *
 * Description: this program prints the number of arguments
 *
 * passed to the program
 *
 * @argc: argument count
 *
 * @argv: argument vector whcih is the array itself
 *
 * Return: this should be 0 on pass
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
