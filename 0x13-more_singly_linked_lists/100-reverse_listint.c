#include "lists.h"

/**
 * reverse_listint - Entry of program
 * Description: reverses a linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre = NULL;
listint_t *nxt = NULL;

while (*head)
{
nxt = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = nxt;
}

*head = pre;

return (*head);
}
