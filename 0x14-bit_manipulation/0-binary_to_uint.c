#include "main.h"
/**
 *power - calculate the exponential of a base
 *base: base of a number
 *exp: exponential of a number
 *Return: result
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;
	while (exp != 0)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_unit - convert binary to base 10
 * @b: pointer to a string of 0 and 1
 * Return: base 10 form of binary string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b10;
	int count = 0, i = 0;

	while (b[i] != NULL)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		count++;
		i++;
	}
	i = 0;
	count--;
	while (b[i] != NULL)
	{
		if (b[i] = '1')
		{
			b10 += power(2, count);
		}
		else
		{
			b10 += 0;
		}
		i++;
		count--;
	}
	return (b10);
}
	
