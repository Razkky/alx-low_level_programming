#include <string.h>
#include "main.h"
/**
 * rev_string - print reverse string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i, j;
	char q[10000], c;

	j = strlen(s);

	for (i = 0; i < j; i++)
	{
		q[i] = s[i];
	}
	i = 0;
	while (s[i] != '\0')
	{
		j--;
		c = q[j];
		s[i] = c;
		i++;
	}
}
