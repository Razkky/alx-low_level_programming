#include "lists.h"
/**
 * dlistint_len - return number element in a linked list
 * @h: pointer to the head of a linked list
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

		for (i = 0; h != NULL; i++)
			h = h->next;

	return (i);
}
