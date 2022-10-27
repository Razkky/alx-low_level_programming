#include "main.h"
/**
 * get_bit - get the bit at a particular index
 * @index: index to be checked
 * @n: inputed number
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index < 64)
		return (0);
	if (n & (1 << index))
		return (1);
	if (index >= 64)
		return (-1);
	else
		return (0);
}
