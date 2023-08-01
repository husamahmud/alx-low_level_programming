#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
