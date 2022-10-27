#include "main.h"
/**
 *power - calculate the exponential of a base
 *@base: base of a number
 *@exp: exponential of a number
 *Return: result
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;

	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * binary_to_uint - convert binary to base 10
 * @b: pointer to a string of 0 and 1
 * Return: base 10 form of binary string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int b10 = 0, count = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count++;
		i++;
	}
	i = 0;
	count--;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
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
