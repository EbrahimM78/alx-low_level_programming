#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: double pointer to start of linked list
 * Return: a pointer to the first node of the reveresed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL, *next;

while (*head)
{
next = (**head).next;
(**head).next = old;
old = *head;
*head = next;
}
*head = old;
return (*head);
}
