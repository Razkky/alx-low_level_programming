#include <unistd.h>

/**
 * _putchar - print c to the output
 *@c: Character to be printed
 *
 * Description: Print Character 'c' to the screen
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
