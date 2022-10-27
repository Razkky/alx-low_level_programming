#include "main.h"
/**
 * print_binary - convert decimal to binary
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int bit;

	for (i = 31; i >= 0; i--)
	{
		bit = n >> i;
		if (bit & 1)
		{
			count = 1;
			_putchar('1');
		}
		else
		{
			if (count == 1)
				_putchar('0');
		}
	}
	if (count != 1)
		_putchar('0');
}
