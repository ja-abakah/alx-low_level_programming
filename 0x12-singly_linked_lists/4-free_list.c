#include "lists.h"

/**
 * free_list - Entrt of program
 * Description: Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 *
 */
void free_list(list_t *head)
{
list_t *cur;

while (head != NULL)
{
cur = head;
head = head->next;
free(curt->str);
free(cur);
}
}
