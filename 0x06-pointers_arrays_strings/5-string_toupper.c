/**
 * string_toupper - change string to upper case
 * @a: inputed string
 *
 * Return: string in upper case
 */

char *string_toupper(char *a)
{
	int i;
	char c;
	char *b = a;

	i = 0;
	for (; *(b + i) != '\0'; i++)
	{
		c = *(b + i);
		if (c > 96 && c < 123)
		{
			c = c - 32;
			*(a + i) = c;
		}
	}
	return (a);
}
