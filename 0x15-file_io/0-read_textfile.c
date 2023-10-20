#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the filename to be read
 * @letters: served as a number of bytes to be read
 * Return: the actual numbers it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int fd;
	ssize_t a;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		write(STDOUT_FILENO, "failed to open the file\n", 24);
		free(buffer);
		close(fd);
		return (0);
	}
	else
	{
		n = read(fd, buffer, letters);
		if (n == -1)
		{
			write(STDOUT_FILENO, "filed to read the file\n", 24);
			free(buffer);
			close(fd);
			return (0);
		}
		else
		{
			a = write(STDOUT_FILENO, buffer, n);
			if (a != n || a == -1)
			{
				free(buffer);
				close(fd);
				return (0);
			}
			else
			{
				free(buffer);
				close(fd);
				return (n);
			}
		}
	}
}
