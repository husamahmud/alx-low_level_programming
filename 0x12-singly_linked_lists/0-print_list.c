#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	int cnt = 0;
	const list_t *curr = NULL;

	curr = h;

	while (curr)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);

		curr = curr->next;
		cnt++;
	}

	return (cnt);
}
