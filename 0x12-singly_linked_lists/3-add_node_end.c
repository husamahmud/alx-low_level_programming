#include "lists.h"

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
