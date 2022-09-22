/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 or -1 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, answer;

	i = 0;
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		answer = *(s1 + i) - *(s2 + i);
		if (answer != 0)
			return (answer);
		i++;
	}
	return (0);
}
