#include "main.h"
/**
 *read_textfile - read text from file to standard output
 *@filename: name of file
 *@letters: number of characters to print to std out
 *Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check;
	char  *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
	{
		free(buff);
		return (-1);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	read(fd, buff, letters);

	check = write(POSIX, buff, letters);
	if (check == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (letters);
}
