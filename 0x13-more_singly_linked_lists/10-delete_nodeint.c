#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	for (; i < index - 1; i++)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}

	if (ptr->next == NULL)
		return (-1);

	ptr->next = ptr->next->next;

	return (1);
}
