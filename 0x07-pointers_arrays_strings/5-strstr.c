#define NULL 0
/**
 * _strstr - find occurance of string b in string a
 * @haystack: string a
 * @needle: string b
 *
 * Return: Location of location of string b in a
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, len, count;

	i = 0;
	k = 0;
	for (len = 0; needle[len] != '\0'; len++)
	;
	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + k))
		{
			j = i;
			count = 0;
			k = 0;
			while (*(haystack + j) != ' ' && *(haystack + j) != '\0')
			{
				if (*(haystack + j) == *(needle + k))
					count++;
				j++;
				k++;
			}
			k = 0;
			if (count == len)
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
