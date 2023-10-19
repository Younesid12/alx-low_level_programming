#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the filename to be read
 * @letters: served as a number of bytes to be read
 * Return: the actual numbers it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t n;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		write(STDOUT_FILENO, "failed to open the file\n", 24);
		return (0);
	}
	else
	{
		n = read(fd, buffer, sizeof(letters));
		if (n == -1)
		{
			write(STDOUT_FILENO, "filed to read the file\n", 24);
			return (0);
		}
		else
		{
			write(STDOUT_FILENO, buffer, sizeof(letters));
			return (n);
		}
	}
}
