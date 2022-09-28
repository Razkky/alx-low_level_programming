/**
 * check  - check for sqaure root of a number
 * @square: square of x
 * @x: integer to check
 *
 * Return: square or -1
 */
int check(int square, int x)
{
	if (x * x == square)
	{
		return (x);
	}
	else if (x < (square / 2))
	{
		return (check(square, x + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns the sqaure root of a number
 * @n: integer to calculate its square
 *
 * Return: square root of natural number
 */

int _sqrt_recursion(int n)
{
	int start;

	start = 1;
	return (check(n, start));
}
