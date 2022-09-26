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
	int i, j, k, index, len, count;

	i = 0;
	k = 0;
	index = 0;

	for (len = 0; needle[len] != '\0'; len++)
	;
	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + k))
		{
			index = i;
			j = i;
			count = 0;
			for (k = 0; k < len; k++)
			{
				if (*(haystack + j) == *(needle + k))
					count++;
				j++;
			}
			if (count == len)
				return (haystack + index);
		}
		i++;
	}
	return (NULL);
}
