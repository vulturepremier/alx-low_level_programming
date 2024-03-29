#include "main.h"
/**
 * append_text_to_file - A function to add text at the end of file
 * @filename: the name of the file
 * @text_content: the text should be added
 * Return: 1 on Success 0 on Fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	ssize_t fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);

	if (wr == -1 || fd == -1)
		return (-1);

	close(fd);

	return (1);
}
