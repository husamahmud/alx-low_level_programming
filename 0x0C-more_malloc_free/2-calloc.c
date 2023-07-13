#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in the array
 *
 * Return: If the function fails - returns NULL
 * Otherwise - returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *c;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (void *) malloc((int) nmemb * sizeof((int) size));
	if (ptr == NULL)
		return (NULL);

	c = ptr;
	for (i = 0; i < (int)(nmemb * size); i++)
		c[i] = 0;

	return (ptr);
}
