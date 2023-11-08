#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this is the Entry point
 *
 * Description: this function prints a struct dog
 *
 * @d: this is the pointer to struct dog
 *
 * Return: No return value
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
	{
		printf("nil\n");
	}
	else
	printf("Name: %s\n", d->name);

	if ((*d).age < 0)
	{
		printf("nil\n");
	}
	else
	printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
	{
	printf("nil\n");
	}
	else
	printf("Owner: %s\n", d->owner);
}
