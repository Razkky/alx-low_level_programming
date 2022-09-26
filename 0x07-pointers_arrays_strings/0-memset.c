/**
 * _memset - filled memory area of n bytes with constatn b
 * @s: pointer pointer to memory location
 * @b: initial value
 * @n: number of bite
 *
 * Return: pointer to memory location s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
