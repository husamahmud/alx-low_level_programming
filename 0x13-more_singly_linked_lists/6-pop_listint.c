#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	int n = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (n);
}
