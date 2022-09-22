/**
 * leet - switch character to digit
 * @a: inputed string
 *
 * Return: switched string
 */

char *leet(char *a)
{
	int i, x;
	char change[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (x = 0; change[x]; x++)
			if (change[x] == *(a + i))
			{
				*(a + i) = replace[x];
				break;
			}
	}
	return (a);
}
