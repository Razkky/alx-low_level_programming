#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array and initialize it with char c
 * @size: size of array
 * @c: value to inititalizing array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i = 0;

	k = malloc(size * sizeof(char));
	if (k == NULL || k == 0)
	{
		return NULL;
	}
	else
	{
		for (; i < size ; i++)
		{
			k[i] = c;
		}
	}
	return (k);
}
