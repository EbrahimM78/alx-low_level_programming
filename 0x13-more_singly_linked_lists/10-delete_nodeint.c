#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to the beginning of linked list
 * @index: index to be deleted
 * Return: 1 if succesful -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *a, *b;
unsigned int i, action = 0;

if (!*head)
return (-1);
for (i = 0, a = *head; a && index; i++, a = (*a).next)
if (i == (index - 1))
{
action = 1;
break;
}

if (action)
{
b = (*a).next;
(*a).next = (*b).next;
free(b);
return (1);
}
else if (!index && (**head).next)
{
b = *head;
*head = (*b).next;
free(b);
return (1);
}
else if (!index && *head)
{
*head = NULL;
free(*head);
return (1);
}
return (-1);
}
