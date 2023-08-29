#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Entry of program
 * Description: Returns the nth node of listint_t linked list.
 * @head: Pointer to head of list.
 * @index: Index of the node to retrieve, starting at 0.
 *
 * Return: Pointer to nth node, or NULL node does not exist.
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;
listint_t *cur = head;

while (cur != NULL)
{
if (c == index)
return (cur);

c++;
cur = cur->index;
}

return (NULL);
}
