#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Entry of program
 * Description: Prints the elements of the listint_t.
 * @h: Pointer to head in the list.
 *
 * Return: The nun of nodes in list.
 *
 */
size_t print_listint(const listint_t *h)
{
/*c refers to the count*/
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}

return (c);
}
