#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog as a string
 * @age: the age of the dog as a floating-point number
 * @owner: the name of the owner of the dog as a string
 *
 * Return: a pointer to newly create dog, Or NULL if memory allocation failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);

	newdog->age = age;

	newdog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->owner, owner);

	return (newdog);
}
