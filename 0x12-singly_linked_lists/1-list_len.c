#include "lists.h"

/**
* list_len - Return the number of elements in a list.
* @h: stringly linked list.
* Return: The number of elements in the list.
*/

size_t list_len(const list_t *h)
{
size_t nbr_nodes = 0;
while (h != NULL)
{
nbr_nodes++;
h = h->next;
}
return (nbr_nodes);
}
