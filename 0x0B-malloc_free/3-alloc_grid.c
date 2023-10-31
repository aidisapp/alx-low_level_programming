#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - this is the main point or the Entry block
 *
 * Description: this function returns a pointer to a 2 dimensional array
 *
 * of integers
 *
 * @width: this is the width of the array.
 *
 * @height: this is the height of the array.
 *
 * Return: on failure, it stays as NULL; if the width or height
 *
 * is 0 or negative, it's NULL
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int set_a, set_b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (set_a = 0; set_a < height; set_a++)
	{
		grid[set_a] = malloc(sizeof(int) * width);
		if (grid[set_a] == NULL)
		{
			for (set_a = set_a - 1; set_a >= 0; set_a--)
			{
				free(grid[set_a]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (set_a = 0; set_a < height; set_a++)
	{
		for (set_b = 0; set_b < width; set_b++)
		{
			grid[set_a][set_b] = 0;
		}
	}
	return (grid);
}
