#include "hash_tables.h"
/**
 * key_index - return index to hash table
 * @key: key of the hash table
 * @size: size of the hash table
 * Return: index of key in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
