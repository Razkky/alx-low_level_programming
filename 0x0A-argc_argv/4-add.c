#include <stdio.h>
#include <stdlib.h>
/**
 * check_number - check if input is number
 * @s: input to be checked
 * Return: 0 if number and 1 if not
 */
int check_number(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
			continue;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - add positive argument
 * @args: number of argument
 * @argv: value of argument
 * Return: sum or Error
 */
int main(int args, char *argv[])
{
	int i = 1, sum = 0, check;

	for (; i < args; i++)
	{
		check = check_number(argv[i]);
		if (check == 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

