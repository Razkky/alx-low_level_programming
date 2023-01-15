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
	hash_node_t *new;
	char *value_copy;

	value_copy = strdup(value);
	if (ht == NULL || key == NULL || *key == '\0' || value_copy == NULL || value == NULL)
	{
		return (1);
	}
	index = key_index((const unsigned char *) key, ht->size);
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
