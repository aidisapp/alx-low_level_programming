#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is the main block
 *
 * Description: this is the new type with new elements
 *
 * @name: this is the name of the dog
 *
 * @age: this is representative of the age
 *
 * @owner: this is for the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
