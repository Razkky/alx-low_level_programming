/**
 * _islower - check for lowercase
 *@c: c is the character to be checked
 *
 * Description: check for lowercase alphabet
 *
 * Return: Either 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
