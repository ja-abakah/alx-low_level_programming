#include "lists.h"

/**
 * free_listint_safe - Entry of program
 * Description: frees a linked list
 * @h: pointer to first node in linked list
 *
 * Return: elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t l = 0;
int d;
listint_t *t;

if (!h || !*h)
return (0);

while (*h)
{
d = *h - (*h)->next;
if (d > 0)
{
t = (*h)->next;
free(*h);
*h = t;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}

*h = NULL;

return (l);
}
