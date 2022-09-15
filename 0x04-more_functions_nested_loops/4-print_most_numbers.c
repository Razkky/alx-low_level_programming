#include "main.h"
/**
 * print_most_numbers - print number except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		if (i != 2 && i != 4)
			_putchar(i);
		i++;
	}
}
