#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Description: print alphabet in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		_putchar('\n');
	}
}
