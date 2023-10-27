#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - this is the Entry point
*
* Description: this function returns the length of a string
*
* @s: this is the string that its length should be determined
*
* Return: this should be the length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

return (1 + _strlen_recursion(s + 1));
}
