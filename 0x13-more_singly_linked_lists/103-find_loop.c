#include "lists.h"

/**
 * find_listint_loop - finds the beggining of a loop in a linked list
 * @head: beggining of linked list
 * Return: beggining of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slower, *faster;

while (head && (*head).next)
{
slower = head;
faster = (*head).next;
while (slower != faster)
{
if (slower)
slower = (*slower).next;
if (faster == head)
return (head);
if (faster)
faster = (*faster).next;
if (faster == head)
return (head);
if (faster)
faster = (*faster).next;
if (faster == head)
return (head);
}
head = (*head).next;
}
return (NULL);
}
