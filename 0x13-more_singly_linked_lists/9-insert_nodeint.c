#include "lists.h"

/**
 * insert_nodeint_at_index -
 * @head: a pointer to a pointer to the head of the list
 * @idx:
 * @n:
 *
 * Return:
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	for (; i < idx - 1; i++)
	{
		if (ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
	}

	if (ptr->next == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
