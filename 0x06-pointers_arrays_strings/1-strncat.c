#include "main.h"
/**
 * _strncat - concatenates two strings up to bye n
 * @dest: first string
 * @src: second string to appended to dest
 * @n: number of bites
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pointer = dest;

	for (; *pointer != '\0'; pointer++)
	;
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*pointer = *src;
		n--;
		pointer++;
	}
	return (dest);
}
