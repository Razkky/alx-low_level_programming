#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point
 *
 * Description: prints "with proper grammar, but the outcome is a piece of
 * art,"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("is negative\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
