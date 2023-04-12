#include "search_algos.h"
/**
 * linear_search - search for a data using linear search algorithm
 * @size: size of array
 * @value: value to search for
 * @array: pointer to an array
 * Return: Index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		printf("\n");
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

