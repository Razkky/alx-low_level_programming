#include "main.h"
/**
 *read_textfile - read text from file to standard output
 *@filename: name of file
 *@letters: number of characters to print to std out
 *Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, check, readNo;
	char  *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	readNo = read(fd, buff, letters);
	check = write(POSIX, buff, readNo);
	if (fd == - 1 || readNo == - 1 || check == - 1 || check != readNo)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (check);
}
