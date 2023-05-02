#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to the head of the list
 * Return: pointer to the new head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *PreviousNode;
	listint_t *NextNode;

	PreviousNode = NULL;
	NextNode = NULL;

	while (*head)
	{
		NextNode = (*head)->next;
		(*head)->next = PreviousNode;
		PreviousNode = *head;
		*head = NextNode;
	}
	*head = PreviousNode;
	return (*head);
}
