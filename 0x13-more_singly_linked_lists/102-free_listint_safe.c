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

while (*h != NULL)
{
d = (intptr_t)*h - (intptr_t)(*h)->next;
if (d > (intptr_t)sizeof(listint_t))
{
t = (*h)->next;
free(*h);
*h = t;
l++;
}
else
{
t = (*h)->next;
free(*h);
*h = t;
l++;
break;
}
}

*h = NULL;

return (l);
}
