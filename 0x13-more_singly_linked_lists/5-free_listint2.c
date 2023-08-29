#include "lists.h"

/**
 * free_listint2 - Entry of program
 * Description: Frees listint_t list and sets NULL to head.
 * @head: Pointer to a pointer to the head of the list.
 *
 */
void free_listint2(listint_t **head)
{
listint_t *c;

if (head == NULL)
return;

while (*head)
{
c = (*head)->next;
free(*head);
*head = c;
}
*head = NULL;
}
