#include "hash_tables.h"
/**
 * hash_table_delete - delete an element from a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	unsigned long int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
