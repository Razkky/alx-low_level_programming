#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocate memory of array of nmemb elements
 *@nmemb: number of element
 *@size: size of element
 *Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *pointer;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	pointer = array;
	for (; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}
	return (array);
}
