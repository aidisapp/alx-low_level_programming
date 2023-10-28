#include "main.h"
#include <stdio.h>

/**
 * _isupper - this is the main block or the Entry point
 *
 * Description: this program is set to check for uppercase letters
 *
 * @u: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int u)
{
	if (u >= 'A' && u <= 'Z')
	return (1);

	else
	return (0);
}
