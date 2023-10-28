#include <stdio.h>
#include "main.h"

/**
 * main - this is the main block
 *
 * Description: this program prints all arguments it receives
 *
 * @argc: argument count
 *
 * @argv: argument vector which is the array itself
 *
 * Return: will always stay at zero if passed
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
