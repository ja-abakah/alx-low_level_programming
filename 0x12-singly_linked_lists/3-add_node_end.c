#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Entry of program
 * Description: Adds a new node at the end of a list_t list.
 * @head: Points to the head in the list.
 * @str: The string to be duplicated.
 *
 * Return: address of new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
list_t *t = *head;
unsigned int l = 0;

while (str[l])
l++;

n = malloc(sizeof(list_t));
if (!n)
return (NULL);

n->str = strdup(str);
n->l = l;
n->next = NULL;

if (*head == NULL)
{
*head = n;
return (n);
}

while (t->next)
t = t->next;

t->next = n;

return (n);
}
