#include "main.h"
#include <string.h>

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
list_t *new_node;

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
new_node->next = *head;

*head = new_node;

return (new_node);
}
