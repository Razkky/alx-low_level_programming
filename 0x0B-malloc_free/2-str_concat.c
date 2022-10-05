#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatinate s1 to s2
 * @s1: first stirng
 * @s@: second string
 * Return: pointer to concatednated string
 */
char *str_concat(char *s1, char *s2)
{
	char *l;
	int len, i, k;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*(s1 + i) != '\0')
	{
		len++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		len++;
	}
	printf("%d\n",len);

	l = malloc((len + 1) * sizeof(char));
	if (l == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		l[i] = s1[i];
	}
	k = i;
	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		l[k] = s2[i];
	}
	l[k] = '\0';
	
	return (l);
}
