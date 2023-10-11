#include "main.h"
#include <unistd.h>


/**
 * main - Entry Point or main block
 *
 * @c: This is the character to print
 *
 * Return: On Success or Pass 1.
 *
 * On error: -1 should be returned and errno set properly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
