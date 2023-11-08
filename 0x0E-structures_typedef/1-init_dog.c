#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this is the Entry point
 *
 * Description: this function initializes a variable called struct dog
 *
 * @name: this will be a be string actually
 *
 * @d: this is the dog pointer
 *
 * @age: this is the age of the dog
 *
 * @owner: this is the owner of the dog
 *
 * Return: there's no return value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
