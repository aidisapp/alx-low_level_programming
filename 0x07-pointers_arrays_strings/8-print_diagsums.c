#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - this is the main point or the Entry block
 *
 * Description: this function prints the sum of the diagonals of
 *
 * a square matrix
 *
 * @a: this is the pointer to the square matrix
 *
 * @size: this represents the size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int add1 = 0;
	int add2 = 0;
	int r; /* r represents rows */

	for (r = 0; r < size; r++)
	{
		add1 += a[r * size + r];
		add2 += a[r * size + (size - 1 - r)];
	}

	printf("%d, %d\n", add1, add2);
}
