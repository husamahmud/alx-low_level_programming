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

	if (*head == NULL)
	{
		free(curr);
		return (-1);
	} else if (index == 1)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}

	while (index != 1)
	{
		ptr = curr;
		curr = curr->next;
		if (ptr->next == NULL)
			return (-1);
		index--;
	}
	ptr->next = curr->next;
	free(curr);
	curr = NULL;
	return (1);
}

