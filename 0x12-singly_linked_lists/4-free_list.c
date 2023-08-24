#include "lists.h"

/**
 * free_list - Entry of program
 * Description: this frees a linked list
 * @head: list_t list to be freed pointer
 * return: void 0.
 */
void free_list(list_t *head)
{
list_t *t;

while (head != NULL)
{
t = head;
head = head->next;
free(t->str);
free(t);
}
}
