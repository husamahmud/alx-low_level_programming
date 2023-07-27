#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the linked list
 * @str: string to be added to the linked list
 *
 * Return: pointer to the new node added to the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr = NULL;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (*head);
}
