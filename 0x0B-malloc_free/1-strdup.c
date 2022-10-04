#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate string str in dynamic memory
 * @str: string to be duplicated
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *k;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	k = malloc((len + 1) * sizeof(char));

	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		k[i] = str[i];
	}
	k[i] = '\0';
	return (k);
}
