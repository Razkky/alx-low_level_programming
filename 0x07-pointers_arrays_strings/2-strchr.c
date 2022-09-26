#define NULL 0
/**
 * _strchr - locate a char in a string and return its location
 * @s: inputed string
 * @c: character to search for
 *
 * Return: location of char
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
