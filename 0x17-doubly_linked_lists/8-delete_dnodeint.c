#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of the linked list
 * @head: a pointer to the header of th doubly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succesed, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index && ptr != NULL; i++)
		ptr = ptr->next;

	if (ptr == NULL)
		return (-1);

	ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	free(ptr);

	return (1);
}
