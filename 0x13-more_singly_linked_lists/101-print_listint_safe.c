#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Entry to program
 * Description: Counts number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *t, *h;
size_t nod = 1;

if (head == NULL || head->next == NULL)
return (0);

t = head->next;
h = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
nod++;
t = t->next;
h = h->next;
}
t = t->next;
while (t != h)
{
nod++;
t = t->next;
}
return (nod);
}

t = t->next;
h = (h->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Entry of program
 * Description: Prints a listint_t list safely.
 * @head: pointer to head of listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nod, ind = 0;

nod = looped_listint_len(head);

if (nod == 0)
{
for (; head != NULL; nod++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}		}
}

else
{
for (ind = 0; ind < nod; ind++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);

}

return (nod);
}
