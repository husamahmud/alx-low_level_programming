#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the listint_t linked list
 *
 * Return: the number of nodes in the listint_t linked list
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;
	const listint_t *curr = NULL;

	if (!h)
		return (0);

	curr = h;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		cnt++;
	}

	return (cnt);
}
