#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: If the function fails - returns NULL
 * Otherwise - returns a pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size > new_size)
		min_size = new_size;
	else
		min_size = old_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}

	for (i = 0; i < min_size; i++)
		*((char *) new_ptr + i) = *((char *) ptr + i);

	free(ptr);

	return (new_ptr);
}
