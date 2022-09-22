#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string to be added to
 * @src: second string to be added
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *pointer = dest;

	for (; *pointer != '\0'; pointer++)
	;
	for (; *src != '\0'; src++)
	{
		*pointer = *src;
		pointer++;
	}
	*pointer = *src;
	return (dest);
}
