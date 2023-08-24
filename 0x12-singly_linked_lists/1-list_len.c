#include "lists.h"

/**
 * list_len - Entry of program
 * Description: the number of elements in the linked list
 * @h: pointer to the head of linked list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
size_t a = 0;

while (h != NULL)
{
h = h->next;
a++;
}

return (a);
}
