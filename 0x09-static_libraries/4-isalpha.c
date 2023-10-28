#include <stdio.h>
#include "main.h"

/**
 * _isalpha - this is the main block or Entry point
 *
 * Description: this checks for alphabetic character
 *
 * @b: the character to be checked
 *
 * Return: 1 if b is a letter, it should return 0 if it's something else
 */

int _isalpha(int b)
{
	return ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'));
}
