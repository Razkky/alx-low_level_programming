/**
 * _strncpy - copy a strings only taking n bytes from the other
 * @dest: string to be coppied to
 * @src: string to be copied
 * @n: number of bites
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *pointer = dest;

	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*pointer = *src;
		pointer++;
		n--;
	}
	for (; n != 0 && *pointer != '\0'; n--, pointer++)
		*pointer = '\0';
	return (dest);
}
