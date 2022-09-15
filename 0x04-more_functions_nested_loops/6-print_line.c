#include "main.h"
/**
 * print_line - print line
 * @n: number of times _ should appear
 */

void print_line(int n)
{
	int a = 95;

	while (n > 0)
	{
		_putchar(a);
		n--;
	}
	_putchar('\n');
}
