#include "lists.h"

/**
 * delete_nodeint_at_index -
 * @head:
 * @index:
 *
 * Return:
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
	} else
	{
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
}

