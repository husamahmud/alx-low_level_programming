#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the header of th doubly linked list
 * @idx: the index at which the new node should be inserted
 * @n: the value to be assigned to the new node
 * Return: a pointer to the newly inserted node, or `NULL` on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;

	if (h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1)
	{
		if (ptr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	new_node->prev = ptr;
	if (ptr->next != NULL)
		ptr->next->prev = new_node;
	ptr->next = new_node;

	return (new_node);
}
