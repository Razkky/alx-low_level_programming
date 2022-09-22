/**
 * cap_string - capitalize first word of a string
 * @a: string in reference
 *
 * Return: string
 */

char *cap_string(char *a)
{
	int n, k;
	char c;
	char *separators = " ,;.!?\"(){}\n\t\0";

	n = 0;
	for (; *(a + n) != '\0'; n++)
	{
		for (k = 0; *(separators + k) != '\0'; k++)
		{
			if (n == 0 || *(a + n - 1) == *(separators + k))
			{
				if (*(a + n) > 96 && *(a + n) < 123)
				{
					c = *(a + n);
					c = c - 32;
					*(a + n) = c;
				}
			}
		}
	}
	return (a);
}
