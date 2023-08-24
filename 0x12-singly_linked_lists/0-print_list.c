#include "lists.h"
#include <stdio.h>

/**
 * print_list - Entry of program
 * Description: Prints the elements in the list_t list.
 * @h: Point to the head in the list.
 *
 * Return: The nodes.
 */
size_t print_list(const list_t *h)
{
size_t c = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
c++;
}

return (c);
}
