#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - this is the main block or the Entry point
 *
 * Description: this function concatenates all the arguments of a program
 *
 * @ac: this represents the count of arguments
 *
 * @av: pointer to the arguments
 *
 * Return: NULL if ac == 0 or av == NULL
 *
 * NULL (failure) or a pointer to a new string if it is passed
 *
 * Every argument is followed by a \n in the new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int length = 0;
	int a = 0, c = 0;
	int b;

	if (ac <= 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++;
		length++;
	} length++;

	ptr = malloc(length * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}

	ptr[c] = '\0';

	return (ptr);
}
