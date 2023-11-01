#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the filename to be read
 * @letters: number of letters to be read
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_num;
	ssize_t bytes_wrote;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	else
	{
		bytes_num = read(fd, buffer, letters);
		if (bytes_num != -1)
		{
			bytes_wrote = write(STDOUT_FILENO, buffer, bytes_num);
			if (bytes_wrote != bytes_num)
			{
				free(buffer);
				close(fd);
				return (0);
			}
			free(buffer);
			close(fd);
			return (bytes_wrote);
		}
		free(buffer);
		close(fd);
		return (0);
	}
}
