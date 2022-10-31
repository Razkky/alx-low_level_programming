#include "main.h"
/**
*create_file - create a new file and write into it
*@filename: name of new file
*@text_content: content of file
*Return: success (1) or -1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
