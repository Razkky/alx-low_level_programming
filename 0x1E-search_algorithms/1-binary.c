#include "search_algos.h"

/**
 * binary_recursion - binary search recursively
 * @array: pointer to an array
 * @left: left index of array
 * @right: right index  of array
 * @value: value to search for
 * Return: index of array or -1 if not found
 */

int binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left >= right)
		return (-1);
	printf("Searching in array:");

	for (i = left; i < right - 1; i++)
	{
		printf(" %d,", array[i]);
	}
	if (i == right - 1)
		printf(" %d\n", array[i]);

	mid = left + (right - left) / 2;
	if ((right - left) % 2 == 0)
		mid -= 1;

	if (array[mid] == value)
		return (mid);
	else if  (array[mid] > value)
		return (binary_recursion(array, left, mid, value));
	else
		return (binary_recursion(array, mid + 1, right, value));

}
/**
 * binary_search - search for a data using binary search
 * @array: pointer to an array
 * @size: size of an array
 * @value: value to search for
 * Return: Index of the value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int index = 0;

	index = binary_recursion(array, 0, size, value);
	return (index);
}
