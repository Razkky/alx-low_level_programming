#include "lists.h"
/**
 * print_list - print out the data in a singly link list
 * @h: pointer to a list
 *
 * Return: Number of nodes in a list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
		}
		else
		{
			printf("[%ld] %s\n", temp->len, temp->str);
			temp = temp->next;
			count++;
		}
	}
	return count;
}
