#include "lists.h"
/**
 * add_dnodeint_end - add element at the end of a linked list
 * @head: pointer to the pointer of the head of a linked list
 * @n: element to be added
 * Return: pointer to the address of the newly added element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	for (temp = *head; temp->next != NULL; temp = temp->next)
		;
	new->n = n;
	new->prev = temp;
	temp->next = new;
	return (new);
}
