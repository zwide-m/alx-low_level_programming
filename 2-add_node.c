#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_custom - adds a new node at the beginning of a list_t list
* @head: double pointer to the head of the list
* @str: string to be added as the new node
*
* Return: address of the new element, or NULL if it fails
*/
list_t *add_node_custom(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (!new_node) 
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = len;
new_node->next = (*head);

(*head) = new_node;
return (*head);
}
