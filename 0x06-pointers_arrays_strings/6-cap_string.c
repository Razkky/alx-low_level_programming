/**
 * cap_string - capitalize first word of a string
 * @a: string in reference
 *
 * Return: string
 */

char *cap_string(char *a)
{
	int n;
	char c;

	n = 0;
	for (; *(a + n) != '\0'; n++)
	{
		if (n == 0 || *(a + n - 1) == 32)
		{
			if (*(a + n) > 96 && *(a + n) < 123)
			{
				c = *(a + n);
				c = c - 32;
				*(a + n) = c;
			}
		}
	}
	return (a);
}
