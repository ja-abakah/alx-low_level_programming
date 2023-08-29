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
int d;
listint_t *t;

if (!head || !*head)
return (0);

d = (*head)->n;
t = (*head)->next;
free(*head);
*head = t;

return (d);
}
