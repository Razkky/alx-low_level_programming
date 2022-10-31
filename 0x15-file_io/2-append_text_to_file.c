#include "main.h"
/**
*append_text_to_file - append a text to the end of a file
*@filename: name of file
*@text_content: content to b added to file
*Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0665);
	if (text_content != NULL)
		w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
