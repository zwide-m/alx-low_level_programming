#include <stdio.h>
#include "lists.h"

/**
* print_list_custom - prints all elements of a list_t list safely
* @h: head node of the list
* Return: number of nodes in the list
*/
size_t print_list_custom(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;
}

return count;
}
