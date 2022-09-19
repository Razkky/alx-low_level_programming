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

	len = strlen(src);
	for (i = 0; i < len; i++){
		*(dest + i) = *(src +i);
	}

	return dest;
}
