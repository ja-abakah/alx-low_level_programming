#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Entry of program.
 * Description: Adds a new node at the beginning of list_t.
 * @head: Points to the head.
 * @str: string to duplicated and added.
 *
 * Return: address of element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int len = 0;

while (str[len])
len++;

n = malloc(sizeof(list_t));
if (!n)
return (NULL);

n->str = strdup(str);
n->len = len;
n->next = (*head);
(*head) = n;

return (*head);
}
