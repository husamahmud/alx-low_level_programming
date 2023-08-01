#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	*head = (*head)->next;

	return (n);
}
