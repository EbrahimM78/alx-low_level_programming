#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the beginning of linked list
 * @idx: index where to insert
 * @n: value for n
 * Return: address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *a = *head;
unsigned int i = 0;

if (!idx)
{
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

(*new).n = n;
(*new).next = *head;

*head = new;

return (*head);
}

while (a)
{
if (i == (idx - 1))
{
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
(*new).n = n;
(*new).next = (*a).next;
(*a).next = new;
return (new);
}
a = (*a).next;
i++;
}
return (NULL);
}
