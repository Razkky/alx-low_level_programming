#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatinate s1 to s2
 * @s1: first stirng
 * @s2: second string
 * Return: pointer to concatednated string
 */
char *str_concat(char *s1, char *s2)
{
	char *l;
	int len, i, k, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	len1 = 0;
	len2 = 0;
	while (*(s1 + i) != '\0')
	{
		len++;
		len1++;
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		len++;
		len2++;
		i++;
	}

	l = malloc((len + 1) * sizeof(char));
	if (l == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		l[i] = s1[i];
		i++;
	}
	k = i;
	for (i = 0; i < len2; i++)
	{
		l[k] = s2[i];
		k++;
	}

	return (l);
}
