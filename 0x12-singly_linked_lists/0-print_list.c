#include "main.h"
#include <string.h>

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
const list_t *cur = h;

while (cur != NULL)
{
if (cur->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", cur->len, cur->str);

c++;
cur = cur->next;
}

return (c);
}
