#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
