#include "lists.h"
/**
 * print_dlistint - print element of a double linked list
 * @h: pointer to the head of a linked list
 * Return: number of element in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *new;

	if (!h)
		return (0);

	new = h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
