#include "lists.h"

/**
 * add_nodeint - Entry of program
 * Description: Adds new node to the beginning of listint_t list.
 * @head: Pointer that points to a pointer to the head of the list.
 * @n: Integer to be added to the new node.
 *
 * Return: The address of new element, or NULL if failed.
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
/*new_n refers to the new node*/
listint_t *new_n = malloc(sizeof(listint_t));

if (!new_n)
return (NULL);

new_n->n = n;
new_n->next = *head;
*head = new_n;

return (new_n);
}
