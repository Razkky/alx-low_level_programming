#define NULL 0
/**
 * _strpbrk - locates first occarrnece of charin string s o
 * @s: main string
 * @accept: second string
 *
 * Return: location to first char of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	i = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		k = 0;
		while (*(accept + k) != '\0')
		{
			if (*(s + i) == *(accept + k))
				return (s + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
