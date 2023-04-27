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

    if (!head || !str)
        return (NULL);

    NewNode = malloc(sizeof(list_t));
    if (!NewNode)
        return (NULL);

    NewNode->str = strdup(str);
    if (!NewNode->str) {
        free(NewNode);
        return (NULL);
    }

    NewNode->len = strlen(str);
    NewNode->next = *head;
    *head = NewNode;

    return (NewNode);
}
