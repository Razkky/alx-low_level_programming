#include "main.h"
/**
*closefile - close a file handle
*@file: name of file
*/
void closefile(int file)
{
	int c;

	c = close(file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}

}
/**
*main - copy content of file1 into file2
*@argc: number of command line argument
*@argv: placeholder for command line argument
*Return: 0 on success or exit
*/
int main(int argc, char *argv[])
{
	int file1, file2, readfile1, writefile2;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (-1);

	readfile1 = read(file1, buff, 1024);
	do {
		if (readfile1 == -1 || file1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writefile2 = write(file2, buff, readfile1);
		if (writefile2 == -1 || file2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		readfile1 = read(file1, buff, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (readfile1 > 0);

	closefile(file1);
	closefile(file2);
	free(buff);
	return (0);
}
