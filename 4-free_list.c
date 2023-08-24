#include <stdlib.h>
#include "lists.h"

/**
* free_list_custom - frees a linked list
* @head: pointer to the head of the list
*/
void free_list_custom(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
