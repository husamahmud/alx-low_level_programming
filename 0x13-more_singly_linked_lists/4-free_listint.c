#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: Noting
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
