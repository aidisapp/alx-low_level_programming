#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - this is the main block
 *
 * @argc: this is the number of arguments
 *
 * @argv: this is the array of arguments
 *
 * otherwise known as the argument vector
 *
 * Return: this will return 0 if successfully or
 *
 * error code if it fails
 */

int main(int argc, char *argv[])
{
	int data1;
	int data2;
	char *opr;
	int (*oprn_)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	data1 = atoi(argv[1]);
	data2 = atoi(argv[3]);

	opr = argv[2];

	oprn_ = get_op_func(opr);

	if (oprn_ == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr == '/' || *opr == '%') && data2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oprn_(data1, data2));

	return (0);
}
