#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *prev;

	ptr = head;
	prev = head;
	while (head && ptr && ptr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = prev;
			prev = ptr;
			while (1)
			{
				ptr = prev;
				while (ptr->next != head && ptr->next != prev)
					ptr = ptr->next;

				if (ptr->next == head)
					break;

				head = head->next;
			}
			return (ptr->next);
		}
	}

	return (NULL);
}
