#include "lists.h"

/**
 * free_listint2 - Frees all the nodes of a linked list and set pointer to NULL
 * @head: A pointer to the head node of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
