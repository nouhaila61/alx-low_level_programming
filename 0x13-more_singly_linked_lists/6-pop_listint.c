#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to a pointer to the head of the linked list
 *
 * Return: integer value of the first node on success, or 0 otherwise
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *NewHead;

	if (!*head)
		return (0);
	NewHead = *head;
	n = NewHead->n;
	*head = NewHead->next;
	free(NewHead);
	return (n);
}
