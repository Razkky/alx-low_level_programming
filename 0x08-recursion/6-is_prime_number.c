/**
 * check - helps is_prime_number function
 * @x: number to be checked
 * @y: check if x is divisble by y
 *
 * Return: 1 if prime or 0
 */

int check(int x, int y)
{
	if (y > 9)
	{
		return (1);
	}
	else if (x % y != 0)
	{
		return (check(x, ++y));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime or 0
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	else
		return (check(n, 2));
}
