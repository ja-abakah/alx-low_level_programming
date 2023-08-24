#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Entry of program
 * Description: Returns the elements in linked list_t.
 * @h: Points to the head in the list.
 *
 * Return: The elements in the list.
 */
size_t list_len(const list_t *h)
{
size_t c = 0;

while (h)
{
c++;
h = h->next;
}

return (c);
}
