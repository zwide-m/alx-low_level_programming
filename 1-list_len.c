#include <stdlib.h>
#include "lists.h"

/**
* count_elements - counts the number of elements in a list_t list
* @h: pointer to the head of the list
*
* Return: the number of elements in the list
*/
size_t count_elements(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return count;
}
