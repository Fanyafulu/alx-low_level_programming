#include "lists.h"

/*
* free_listp2 - frees a linked list
* @head: pointer a list.
* Return: void.
*/

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}
