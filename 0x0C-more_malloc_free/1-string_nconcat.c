#include <stdlib.h>
#include "main.h"
/**
 * check_length - check length of string
 * @s: inputed string
 * Return: length of string
 */
int check_length(char *s)
{
	unsigned int length = 0, i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
/**
 * string_nconcat - concatenate n byte of string s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: number of byte
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, length3, i, j;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = check_length(s1);
	length2 = check_length(s2);
	if (n >= length2)
		length3 = length1 + length2 + 1;
	else
	{
		length3 = length1 + n + 1;
		length2 = n;
	}
	pointer = malloc(length3 * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < length1)
	{
		pointer[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < length2)
	{
		pointer[i + j] = s2[j];
		j++;
	}
	pointer[i + j] = '\0';
	return (pointer);
}



