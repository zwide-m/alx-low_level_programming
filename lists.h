#ifndef LISTS_H
#define LISTS_H

/**
* struct list_s - singly linked list
* @str: string
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
* for a project
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/**
* print_list - prints all elements of a list_t list
* @h: head node of the list
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h);

/**
* list_len - counts the number of nodes in a list_t list
* @h: head node of the list
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h);

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: address of the head pointer
* @str: string to store in the new node
* Return: address of the new node, or NULL on failure
*/
list_t *add_node(list_t **head, const char *str);

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: address of the head pointer
* @str: string to store in the new node
* Return: address of the new node, or NULL on failure
*/
list_t *add_node_end(list_t **head, const char *str);

/**
* free_list - frees a list_t list
* @head: head node of the list
*/
void free_list(list_t *head);

#endif /* LISTS_H */
