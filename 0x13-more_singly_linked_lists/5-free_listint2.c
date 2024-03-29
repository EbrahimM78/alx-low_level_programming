#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees listint_t list
 * @head: double pointer to the beginning of the linked list
 */

void free_listint2(listint_t **head)
{
listint_t *a;

while (head && *head)
{
a = *head;
*head = (**head).next;
free(a);
}
}
