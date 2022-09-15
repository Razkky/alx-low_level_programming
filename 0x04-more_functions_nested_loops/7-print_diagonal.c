#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number of times
 */

void print_diagonal(int n)
{
	int space;
	int lines = 0;

	if (n > 0)
	{
		while (lines < n)
		{
			for(space = 0; space < lines; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

