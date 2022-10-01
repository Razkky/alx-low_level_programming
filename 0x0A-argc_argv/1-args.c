#include <stdio.h>
/**
 * main - print number of arguement 
 * @argc: number of arguement
 * @argv: value of arguement
 *
 * Return: sucess (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
