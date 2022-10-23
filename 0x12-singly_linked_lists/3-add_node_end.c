#include "lists.h"
/**
 * add_node_end - adds new node at end of a list
 * @head: pointer to head of list
 * @str: string to be added to a node
 * Return: address of new element or Null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	for (temp = *head; temp->next != NULL; temp = temp->next)
		;
	if (temp->str != new->str)
	{
		temp->next = new;
		return (new);
	}
	return (new);
}
