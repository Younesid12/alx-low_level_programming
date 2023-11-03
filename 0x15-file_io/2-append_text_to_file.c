#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of a file
 * @text_content: pointer to the text content
 * Return: 1 if seccussful, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	ssize_t letters;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content != NULL)
		{
			letters = strlen(texti_content);
			bytes_written = write(fd, text_content, letters);
			if (bytes == -1)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}


