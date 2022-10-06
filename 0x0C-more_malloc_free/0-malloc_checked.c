#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - return pointer to allocated memory
 * @b: size of memeory
 * Return: pointer to dynamic memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
