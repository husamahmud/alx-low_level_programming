#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	(d->name == NULL) ? printf("(nil)\n") : printf("%s\n", d->name);

	printf("Age: %f", d->age);

	printf("Owner: ");
	(d->owner == NULL) ? printf("(nil)\n") : printf("%s\n", d->owner);
}
