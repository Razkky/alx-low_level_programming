#include "lists.h"
/**
 *listint_len - count number of element in list
 *@h: pointer to head of list
 *Return: number of element in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
