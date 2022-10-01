#include <stdio.h>
/**
 * main - print value of arguement
 * @args: number of arguement
 * @argv: value of arguement
 * Return: sucess (0)
 */
int main(int args, char *argv[])
{
	int i = 0;

	for (; i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
