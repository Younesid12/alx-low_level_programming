#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: pointer to text to be written as content in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t length;
	int fd;
	ssize_t n;
	int ch;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = malloc(sizeof(char) * 2);
		text_content = " ";
		length = 1;
	}
	length = (size_t)strlen(text_content);
	ch = access(filename, F_OK);
	if (ch == 0)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 700);
	if (fd == -1)
	{
		return (-1);
	}
	n = write(fd, text_content, length);
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	else if (*text_content == ' ')
	{
		free(text_content);
		close(fd);
	}
	return (1);
}
