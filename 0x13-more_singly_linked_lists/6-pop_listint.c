#include "lists.h"
/**
 * pop_listint - delete head node and return head node data
 * @head: pointer to the address of head pointer
 * Return: return data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
