#include <string.h>
#include "main.h"

void rev_string(char *s)
{
	char q[10], c;
	int i, j;

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
