#include "lists.h"
/**
 * list_len - return the number of element in linked list
 * @h: pointer to head of a list
 * Return: number of element in linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
