#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the integer value to be stored in the new node
 *
 * Return: a pointer to the new node, or NULL if the operation failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new_node || head == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (; i < idx - 1; i++)
	{
		if (ptr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
