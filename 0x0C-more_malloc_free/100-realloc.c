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
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = (void *) malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = (void *) malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (old_size > new_size)
		old_size = new_size;


	for (i = 0; i < old_size; i++)
		((char *) new_ptr)[i] = ((char *) ptr)[i];

	free(ptr);

	return (new_ptr);
}
