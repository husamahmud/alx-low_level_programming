#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the struct dog
 * @name: the name of the dog as a string
 * @age: the age of the dog as a floating-point number
 * @owner: the name of the owner of the dog as a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
