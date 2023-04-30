#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: integer to be stored in the new node
 *
 * Return: A pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *temp = *head;

	NewNode = malloc(sizeof(listint_t));

	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = NewNode;

	return (NewNode);
}
