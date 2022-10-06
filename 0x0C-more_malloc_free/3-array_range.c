#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int size, i = 0;
	int *pointer;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(size * sizeof(int));
	if (pointer == NULL)
		return (NULL);
	for (; i < size; i++, min++)
	{
		pointer[i] = min;
	}
	return (pointer);
}
