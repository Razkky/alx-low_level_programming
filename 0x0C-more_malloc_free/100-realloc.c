#include <stdlib.h>
#include "main.h"
/**
 * realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to first memory block
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 * Return: pointer to new memory block or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	char *temp;
	char *old;
	unsigned int i;

	old = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		pointer = malloc(new_size * sizeof(int));
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size * sizeof(int));
		temp = pointer;
		for (i = 0; i < old_size; i++)
		{
			temp[i] = old[i];
		}
		return (pointer);
	}
	if (new_size < old_size)
	{
		pointer = malloc(new_size * sizeof(int));
		temp = pointer;
		for (i = 0; i < new_size; i++)
		{
			temp[i] = old[i];
		}
		return (pointer);
	}
	free(ptr);
	return (NULL);
}
