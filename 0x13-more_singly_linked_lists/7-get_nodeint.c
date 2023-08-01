#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node
 *
 * Return: pointer to nth node, or (NULL) if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = (listint_t *) malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr = head;
	while (index--)
		ptr = ptr->next;

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
