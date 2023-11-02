#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to a filename
 * @text_content: pointer to the text content
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t letters;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		letters = strlen(text_content);
		if (text_content != NULL)
		{
			bytes_written = write(fd, text_content, letters);
			if (bytes_written == -1)
			{
				close(fd);
				return (-1);
			}
		}
	}

	close(fd);
	return (1);
}
