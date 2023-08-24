#include "main.h"
#include <string.h>

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
list_t *new_node, *cur;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
cur = *head;
while (cur->next != NULL)
cur = cur->next;
cur->next = new_node;
}

return (new_node);
}
