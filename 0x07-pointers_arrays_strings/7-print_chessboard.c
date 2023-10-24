#include <stdio.h>
#include "main.h"

/**
* print_chessboard - this is the Entry point or the main block
*
* Description: this function will print a chessboard
*
* @a: Well, this is the 2D array representing the chessboard
*/

void print_chessboard(char (*a)[8])
{
	int r, c; /* r and c are representing rows and columns respectively */

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			putchar(a[r][c]);
		}
		putchar('\n');
	}
}
