#include <stdio.h>
/**
 * main - print value of arguement
 * @args: number of arguement
 * @argv: value of arguement
 * return: sucess (0)
 */
int main(__attribute__((unused)) int args, char *argv[])
{
	int i = 0;
	
	for (; i < args; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}	
