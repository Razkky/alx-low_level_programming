#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two argument
 * @args: number of argument
 * @argv: value of argument
 * Return: Multiple of two arguement or error
 */
int main(int args, char *argv[])
{
	int i = 1, multiple = i;

	if (args < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (; i < args; i++)
		{
			multiple = multiple * atoi(argv[i]);
		}
		printf("%d\n", multiple);
	}
	return (0);
}
