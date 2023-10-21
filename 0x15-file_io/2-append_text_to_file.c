#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: a pointer to the name of a file
 * @text_content: pointer to the content to be appended to a file
 * Return: 1 on success and if the file exist, -1 if not or on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;
	int integer;
	size_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	integer = access(filenmae, W_OK);
	if (integer == 0)
	{
		if (text_content != NULL)
		{
			fd = open(filenmae, O_WRONLY | O_APPEND);
			if (fd == -1)
			{
				return (-1);
			}
			else
			{
				length = (size_t)strlen(file_content);
				n = write(fd, text_content, length);
				if (n == -1)
				{
					close(fd);
					return (-1);
				}
				else
				{
					close(fd);
					return (1);
				}
			}

		}

	}
	return (-1)
}
