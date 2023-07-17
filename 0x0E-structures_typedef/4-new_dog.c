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
	int name_len = 0, owner_len = 0;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	newdog->name = malloc(sizeof(char) * strlen(name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		return (NULL);
	}
	strcpy(newdog->name, name);
	name[name_len + 1] = '\0';

	newdog->age = age;

	newdog->owner = malloc(sizeof(char) * strlen(owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		return (NULL);
	}
	strcpy(newdog->owner, owner);
	owner[owner_len + 1] = '\0';

	return (newdog);
}
