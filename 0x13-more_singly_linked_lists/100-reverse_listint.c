#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		/* before changing the next of curr, store the next node */
		next = curr->next;

		/* update the next pointer of current to the prev
		reverse curr node's pointer */
		curr->next = prev;

		/* update prev as curr and curr as next
		moves the pointers one position ahead */
		prev = curr;
		curr = next;
	}
	*head = prev;

	return (*head);
}
