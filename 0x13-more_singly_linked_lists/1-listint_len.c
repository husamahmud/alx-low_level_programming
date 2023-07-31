#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to the head of the listint_t linked list
 *
 * Return: the number of nodes in the listint_t linked list
 *         If the linked list is empty, returns 0
 */

size_t listint_len(const listint_t *h)
{
	int cnt = 0;
	const listint_t *curr = NULL;

	if (!h)
		return (0);

	curr = h;

	while (curr)
	{
		curr = curr->next;
		cnt++;
	}

	return (cnt);
}
