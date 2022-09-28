#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: inputed string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		while (*(s + 1) != '\0')
		{
			s++;
		}
	}
	if (*(s - 1) == '\n')
	{
		_putchar(*s);
		_putchar('\n');
			return;
	}
	_putchar(*s);
	_print_rev_recursion((s-1));
}
