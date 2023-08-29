#include "lists.h"

/**
 * delete_nodeint_at_index - Entry of program
 * Description: deletes a node in linked list at a particular index
 * @head: pointer to first element in list
 * @index: node index to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t = *head;
listint_t *cur = NULL;
unsigned int a = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(t);
return (1);
}

while (i < index - 1)
{
if (!t || !(t->next))
return (-1);
t = t->next;
a++;
}


cur = t->next;
t->next = cur->next;
free(cur);

return (1);
}
