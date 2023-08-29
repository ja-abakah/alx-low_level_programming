#include "lists.h"

/**
 * listint_len - Entry of program
 * Description: Returns number of elements in listint_t list.
 * @h: Pointer to head of list.
 *
 * Return: The number of elements in list.
 *
 */
size_t listint_len(const listint_t *h)
{
/*c refers to the count*/
size_t c = 0;

while (h)
{
c++;
h = h->next;
}

return (c);
}
