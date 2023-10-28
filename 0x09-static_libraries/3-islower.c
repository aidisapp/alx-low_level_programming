#include <stdio.h>
#include "main.h"


/**
* _islower - this is the Entry point or main block
*
* Description: this checks if char is lowercase
*
* @c: is the char to be checked
*
* Return: 1 if char is lowercase, otherwise return 0.
*
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
