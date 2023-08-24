#include "lists.h"

/**
 * print_list - Entry of program
 * Description: prints all elements of linked list
 * @h: pointer to list_t list to print
 *
 * Return: the number of nodes
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
