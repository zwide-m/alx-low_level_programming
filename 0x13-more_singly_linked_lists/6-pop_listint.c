#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked list
 * @head: this is a pointer to the first element in the linked list
 *
 * Return: the data that is inside the elements that were deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
