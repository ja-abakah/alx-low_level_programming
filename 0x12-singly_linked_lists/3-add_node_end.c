#include "lists.h"

/**
 * add_node_end - Entry of program
 * Description: adds a new node at the end of a linked list
 * @head: double pointer to the list_t
 * @str: string to put in node
 *
 * Return: address of new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_n;
list_t *temp;

if (str == NULL)
return (NULL);

new_n = malloc(sizeof(list_t));
if (new_n == NULL)
return (NULL);

new_n->str = strdup(str);
if (new_n->str == NULL)
{
free(new_n);
return (NULL);
}
new_n->len = strlen(str);
new_n->next = NULL;

if (*head == NULL)
{
*head = new_n;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_n;
}
return (new_n);
}
