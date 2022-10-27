#include "main.h"
/**
 * set_bit - set the bit of a particular index to 1
 * @n: inputed number
 * @index: index to reset
 * Return: succcess(1) or failure (0);
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shifted = 0;
	unsigned int i = 0;

	shifted = (1 << index);
	for (; i < 64; i++)
	{
		if (i == index)
		{
			*n |= shifted;
			return (1);
		}
	}
	return (-1);
}

