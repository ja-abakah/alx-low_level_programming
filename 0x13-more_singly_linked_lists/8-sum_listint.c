#include "lists.h"

/**
 * sum_listint - Entry of program
 * Description: Returns the sum data (n) of linked list.
 * @head: Pointer to head of list.
 *
 * Return: The sum data (n) in linked list, or 0 if empty.
 *
 */
int sum_listint(listint_t *head)
{
/*s refers to the sum of all the data in n*/
int s = 0;
listint_t *c = head;

while (c)
{
s += c->n;
c = c->next;
}

return (s);
}
