#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer to the header of th doubly linked list
 * @index: index of the node
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	ptr = head;
	while (index--)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
