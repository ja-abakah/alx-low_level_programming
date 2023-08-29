#include "lists.h"

/**
 * pop_listint - Entry of program
 * Description: Deletes the head node of listint_t linked list.
 * @head: Pointer that points to pointer to head of list.
 *
 * Return: The data (n) of deleted node, or (0) if empty.
 *
 */
int pop_listint(listint_t **head)
{
/*d refers to the data*/
int d = 0;
listint_t *t;

if (head == NULL || *head == NULL)
return (0);

t = *head;
d = t->n;
*head = (*head)->next;
free(t);

return (d);
}
