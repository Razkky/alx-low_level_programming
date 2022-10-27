#include "main.h"
/**
 * clear_bit - set the bit at a particular index t o0
 * @n: inputed number
 * @index: index to be changed
 * Return: succees (1) or (0)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 0;
	unsigned long int shifted = 1 << index;

	for (; i < 64; i++)
	{
		if (i == index)
		{
			if (*n & shifted)
				*n ^= shifted;
			return (1);
		}
	}
	return (-1);
}
