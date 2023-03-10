#include "lists.h"
/**
 * add_dnodeint - add new node at the begining of a linked list
 * @head: pointer to the address of the head of the node
 * @n: element to be added
 * Return: pointer to the address of new element or NUll on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (!*head)
	{
		new->n = (int)(n);
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = *head;
	new->n = (n);
	new->next = *head;
	new->prev = NULL;
	temp->prev = new;
	*head = new;

	return (new);
}
