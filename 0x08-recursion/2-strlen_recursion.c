#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: inputed string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return 1;
	}
	return 1 + _strlen_recursion(s + 1);
}
