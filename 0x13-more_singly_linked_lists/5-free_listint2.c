#include "lists.h"

/*
* free_listp2 - frees a linked list
* @head: pointer a list.
* Return: void.
*/

void free_listin2(listin_t **head)
{
listin_t *temp;

if (head != NULL)
{
while (*head)
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}
