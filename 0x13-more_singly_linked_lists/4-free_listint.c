#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees listint_t list
 * @head: pointer to the beginning of the linked list
 */

void free_listint(listint_t *head)
{
listint_t *a;

while (head)
{
a = head;
head = (*head).next;
free(a);
}
}
