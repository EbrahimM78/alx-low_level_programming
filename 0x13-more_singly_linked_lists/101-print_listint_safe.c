#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the beginning of linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
int a, b = 0;
listint_t *slower, *fast;

if (!head)
exit(98);
for (a = 1; (*head).next && !b; head = (*head).next, a++)
{
if ((*head).next)
slower = (*head).next;
if ((*head).next->next)
fast = (*head).next->next;
while (slower != fast)
{
if (slower)
slower = (*slower).next;
if (fast == head)
b = 1;
if (fast && !b)
fast = (*fast).next;
if (fast == head)
b = 1;
if (fast && !b)
fast = (*fast).next;
if (fast == head)
b = 1;
}
printf("[%p] %d\n", (void *)head, (*head).n);
}

for (; b && (*head).next != fast; a++, head = (*head).next)
printf("[%p] %d\n", (void *)head, (*head).n);
printf("[%p] %d\n", (void *)head, (*head).n);
if (fast)
printf("-> [%p] %d\n", (void *)fast, (*fast).n);
return (a);
}
