/**
 * _isalpha - check for an alphabet
 * @c: character to be checked
 *
 * Description: return 1 if character is lower and 0 otherwise
 *
 * Return: Either 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
