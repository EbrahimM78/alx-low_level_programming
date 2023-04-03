#include "lists.h"

/**
 * find_listint_loop - finds the beggining of a loop in a linked list
 * @head: beggining of linked list
 * Return: beggining of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;

if (head == NULL || head->next == NULL)
return (NULL);
slow = slow->next;
fast = fast->next->next;
while (fast && fast->next)
{
if (slow == fast)
break;
slow = slow->next;
fast = fast->next->next;
}
if (slow != fast)
return (NULL);

slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
