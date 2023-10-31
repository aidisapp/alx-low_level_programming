#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this is the Entry point or the main point
 *
 * Description: this function frees the memory allocate for the grid
 *
 * this is created by alloc_grid()
 *
 * @grid: this is the grid to free
 *
 * @height: this is the height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	if (height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
