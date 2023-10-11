#include <stdio.h>
#include "main.h"

/**
* _isalpha - this is the main block or Entry point
*
* Description: this checks for alphabetic character
*
* @c: the character to be checked
*
* Return: 1 if c is a letter, it should return 0 if it's something else
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
