#include "lists.h"

/**
 * print_listint - this prints all the elements of a linked list
 * @h: the linked list of the type listint_t to print
 *
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
