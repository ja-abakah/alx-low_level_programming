#include "lists.h"

/**
 * add_nodeint_end - Entry of program
 * Description: Adds a new node to the end of listint_t list.
 * @head: Pointer that points to pointer to the head of list.
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of new element, or NULL if failed.
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/*new_n refers to the new node and allocation space for the the new node*/
listint_t *new_n;
listint_t *c = *head;

new_n = malloc(sizeof(listint_t));
if (!new_n)
return (NULL);

new_n->n = n;
new_n->next = NULL;

if (*head == NULL)
{
*head = new_n;
return (new_n)
}

while (c->next)
c = c->next;
c->next = new_n;

return (new_n);
}
