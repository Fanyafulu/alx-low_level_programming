#include "lists.h"

/*
* free_listp2 - frees a linked list
* @head: head of a list.
* Return: no return.
*/

void free_listin2(listin_t **head)
{
listin_t *temp;
listin_t *curr;

if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
