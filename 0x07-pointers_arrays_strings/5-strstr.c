#define NULL 0
/**
 * _strstr - find substrig
 * @haystack: first string
 * @needle: second string
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle + j))
			return (haystack + i);
	}
	return (NULL);
}
