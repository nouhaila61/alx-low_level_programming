#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to the head of list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
