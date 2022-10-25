#include "lists.h"
/**
 * print_listint - print element of a list
 * @h: pointer to the head of the list
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
