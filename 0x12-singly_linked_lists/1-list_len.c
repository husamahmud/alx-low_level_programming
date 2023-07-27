#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;
	const list_t *curr = NULL;

	curr = h;

	while (curr)
	{
		curr = curr->next;
		cnt++;
	}

	return (cnt);
}
