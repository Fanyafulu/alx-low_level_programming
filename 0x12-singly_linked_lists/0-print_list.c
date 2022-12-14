#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: pointer struct.
* Return: The number of nodes in h.
*/

size_t print_list(const list_t *h)
{
size_t nbr_nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
nbr_nodes++;
h = h->next;
}
return (nbr_nodes);
}

