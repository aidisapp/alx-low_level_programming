#include <stdio.h>
#include "main.h"

/**
 * main - this is the Entry point
 *
 * Description: this is the programme that prints its name,
 *
 * followed by a new line
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: it will certainly be 0 if passed
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
