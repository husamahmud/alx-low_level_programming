#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: If malloc fail causes the program terminate with an exit
 * status value of (98) Otherwise return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

