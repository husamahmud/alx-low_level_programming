#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: the integer value to be stored in the new node
 *
 * Return: If the function is successful, it returns a pointer to the
 *					newly created node. If the function fails to allocate memory
 *					for the new node, it returns NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
