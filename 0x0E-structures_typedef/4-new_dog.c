#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - this is the Entry point
 *
 * Description: this actually creates a new dog
 *
 * @name: this is the name of dog
 *
 * @age: this is the age of dog
 *
 * @owner: this represents the owner of dog
 *
 * Return: would store a copy of name and owner if it's
 *
 * successful or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen, ownerLen;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	nameLen = _strLen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	fillMem(name, nameLen, n_dog->name);

	ownerLen = _strLen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	fillMem(owner, ownerLen, n_dog->owner);

	n_dog->age = age;

	return (n_dog);
}

/**
 * _strLen - this is the main point
 *
 * Description: this function gets the length of a string
 *
 * @str: this is the string
 *
 * Return: Always the length of string
 */

int _strLen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * fillMem - this is another main point
 *
 * Description: this particular function Copies literal string
 *
 * to allocated memory
 *
 * @str: this is the literal string
 *
 * @strLen: this poses as the string length
 *
 * @dest: this is the memory allocatedy
 */

void fillMem(char *str, int strLen, char *dest)
{
	int a;

	for (a = 0; a < strLen; a++)
		dest[a] = str[a];

	dest[a] = '\0';
}
