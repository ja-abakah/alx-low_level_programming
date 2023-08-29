#include "lists.h"

/**
 * insert_nodeint_at_index - Entry of program
 * Description: Inserts a new node at a position in listint_t linked list.
 * @head: Pointer that points to a pointer to head of list.
 * @idx: Index at which the new node should be added.
 * @n: Integer value to add to new node.
 *
 * Return: The address of new node, or NULL if failed.
 * If possible, add new node at index idx, else return NULL.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
/*new_n refers to the new nodet*/
listint_t *new_n = malloc(sizeof(listint_t));
listint_t *current = *head;
unsigned int c = 0;

if (new_n == NULL)
return (NULL);

new_n->n = n;

if (idx == 0)
{
new_n->next = *head;
*head = new_n;
return (new_n);
}

while (cur != NULL && c < idx - 1)
{
cur = cur->next;
c++;
}

if (cur == NULL)
{
free(new_n);
return (NULL);
}

new_n->next = cur->next;
cur->next = new_n;

return (new_n);
}
