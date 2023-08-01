#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if the deletion is successful, or -1 if the node cannot be deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		free(curr);
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	for (; i < index - 1; i++)
	{
		if (curr->next == NULL || curr == NULL)
			return (-1);
	}

	ptr = curr->next;
	curr->next = ptr->next;
	free(ptr);

	return (1);
}

