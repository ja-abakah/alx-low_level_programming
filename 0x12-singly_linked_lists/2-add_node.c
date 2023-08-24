#include "lists.h"

/**
 * add_node - Entry of progrm
 * Description: adds new node to the start of a list
 * @head: a double pointer to the list
 * @str: pointer to the string
 * Return: new address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_n;

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
new_n->next = *head;
*head = new_n;

return (new_n);
}
