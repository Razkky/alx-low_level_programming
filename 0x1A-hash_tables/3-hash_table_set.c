#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: pointer to a hash table
 * @key: key of the hash table
 * @value: value of the hash table
 * Return: 1 on success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL || key == NULL)
	{
		free(new);
		return (1);
	}
	index = key_index((const unsigned char *) key, ht->size);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		if (ht->array[index]->value == NULL)
		{
			free(ht->array[index]->value);
			return (0);
		}
		return (1);
	}
	new->value = strdup(value);
	new->key = strdup(key);
	if (new->value == NULL || new->key == NULL)
	{
		free(new->value);
		free(new->key);
		return (0);
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
