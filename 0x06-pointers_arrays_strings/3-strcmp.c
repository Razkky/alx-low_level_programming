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

	for (; *s1 + i != '\n'; i++)
	{
		answer = (*s1 + i) - (*s2 + i);
		if (answer != 0)
			return (answer);
	}
	return (0);
}
