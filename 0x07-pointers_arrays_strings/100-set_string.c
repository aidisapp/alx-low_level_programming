#include <stdio.h>
#include "main.h"

/**
 * set_string - this is the main block or Entry point
 *
 * Description: this function sets the value of a pointer to a char
 *
 * @s: this stands for a pointer to a pointer to char
 *
 * @to: this represents the string to set the pointer to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
