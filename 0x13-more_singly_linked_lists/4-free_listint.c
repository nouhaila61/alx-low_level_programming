#include "lists.h"

/**
 * free_listint - Frees all the nodes of a linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
