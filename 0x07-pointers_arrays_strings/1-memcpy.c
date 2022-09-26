/**
 * _memcpy - copy n bytes from memory area src to dest
 * @dest: memory location to copy n bytes to
 * @src: memory location to copy n bytes from
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
