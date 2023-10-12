#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the header of th doubly linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
