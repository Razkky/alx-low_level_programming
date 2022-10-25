#include "lists.h"
/**
*add_nodeint - add node at the begining of a list
*@head: pointer to the head pointer of the list
*@n: variable to be added to newly created list
*Return: pointer to newly created list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(n));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	*head = new;
	new->next = temp;
	return (new);
}
