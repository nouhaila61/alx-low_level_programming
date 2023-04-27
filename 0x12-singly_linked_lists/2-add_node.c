#include "lists.h"
/**
 * add_node - add new node at the beginning of list_t list
 * @head: double pointer to the head of the list
 * @str: string that will be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	NewNode = malloc(sizeof(list_t));
	if (!NewNode)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = (*head);
	(*head) = NewNode;

	return (*head);
}
