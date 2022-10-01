#include "main.h"
/**
 * main - print name of program
 * @argc: number of argument
 * @argv: value of argument
 *
 * Return: success (0)
 */

int main(int argc, char *argv[])
{
	char *s = argv[0];
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
