#include "lists.h"
/**
 * print_list - print out the data in a singly link list
 * @h: pointer to a list
 *
 * Return: Number of nodes in a list
 */

size_t print_list(const list_t *h)
{
	int i;
	char *str1;

	for (i = 0; h; i++, h = h->next)
	{
		str1 = h->str;
		if (str1)
			printf("[%i] %s\n", h->len, str1);
		else
			printf("[0] %p\n", str1);
	}
	return (i);
}
