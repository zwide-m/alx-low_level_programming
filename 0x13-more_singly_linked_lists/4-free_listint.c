#include "lists.h"

/**
 * free_listint - the linked list is to be freed
 * @head: the listint_t list is to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
