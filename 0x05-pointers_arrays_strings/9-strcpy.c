#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy string src into dest
 * @dest: variable to string src
 * @src: string to be copied to dest
 * Return: string dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
