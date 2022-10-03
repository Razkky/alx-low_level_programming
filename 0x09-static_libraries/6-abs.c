/**
 * _abs - Return absolute value
 * @n: value to be checked
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
		return (n + (n * -2));
	else
		return (n);
}
