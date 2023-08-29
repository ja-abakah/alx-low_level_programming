#include "lists.h"

/**
 * free_listint - Entry of program
 * Description: Frees a listint_t list.
 * @head: Pointer to head of list.
 *
 */
void free_listint(listint_t *head)
{
listint_t *c;

while (head)
{
c = head->next;
free (head);
head = c;
}
}
