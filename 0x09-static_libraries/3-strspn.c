/**
 * _strspn - get length of prefix substring
 * @s: main string
 * @accept: substring
 *
 * Return: length of substring found in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, noFound;
	int i, k;

	count = 0;
	i = 0;
	noFound = 0;

	while (*(s + i) != '\0')
	{
		k = 0;
		noFound = count;
		while (*(accept + k) != '\0')
		{
			if (*(s + i) == *(accept + k))
				count++;
			k++;
		}
		if (noFound == count)
			break;
		i++;
	}
	return (noFound);
}

