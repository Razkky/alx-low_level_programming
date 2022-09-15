#include <stdio.h>
/**
 * _isdigit - check for digit
 * @c: parameter to b checked
 *
 * Return: Either 1 or 0;
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
