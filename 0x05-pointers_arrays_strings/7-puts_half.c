#include <string.h>
#include "main.h"
/**
 * puts_half - print half string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, j;

	i = strlen(str);
	j = (i - 1) / 2 + 1;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
