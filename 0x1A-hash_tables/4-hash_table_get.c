#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value by its key
 * @ht: pointer to a hash table
 * @key: pointer to the key
 * Return: A pointer to the value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
