/**
 * leet - switch character to digit
 * @a: inputed string
 *
 * Return: switched string
 */

char *leet(char *a)
{
	char *replace = "4433007711\0";
	char *change = "aAeEoOtTLl\0";
	int i, k;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (k = 0; *(change + k) != '\0'; k++)
		{
			if (*(a + i) == *(change + k))
			       *(a + i) = *(replace + k);
		}
	}
	return (a);
}	
