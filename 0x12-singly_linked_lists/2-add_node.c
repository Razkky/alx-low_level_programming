#include "lists.h"
/**
 * add_node - add new node at begining of list
 * @head: pointer to a pointer head
 * @str: pointer to a string
 * Return: pointer to address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	new->next = temp;
	return (*head);
}
