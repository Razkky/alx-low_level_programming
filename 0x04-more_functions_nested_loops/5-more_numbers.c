#include "main.h"

/**
 * more_numbers - print numbers multiple times
 */

void more_numbers(void)
{
	int i, j, k, l, count;

	j = 0;
	k = '0';
	l = '1';
	for (i = 0; i < 10; i++)
	{
		while (j < 15)
		{
			if (k > '9')
			{
				k = '0';
				count = 1;
			}
			if (count == 1)
				_putchar(l);
			_putchar(k);
			k++;
			j++;
		}
		j = 0;
		k = '0';
		l = '1';
		count = 0;
		_putchar('\n');
	}
}
