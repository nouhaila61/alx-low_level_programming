#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	NewNode->next = (*head);
	(*head) = NewNode;

	return (*head);
}
