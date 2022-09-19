#include "main.h"
/**
 * puts2 - print every other ch of string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
