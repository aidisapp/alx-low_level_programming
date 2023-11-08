#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this is the Entry point
 *
 * Description: this function prints a struct dog
 *
 * @d: this is the pointer to struct dog
 *
 * Return: Nothing actually
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
