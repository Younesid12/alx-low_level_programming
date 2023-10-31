#include "main.h"
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
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	else
	{
		bytes_num = read(fd, buffer, letters);
		if (bytes_num == -1)
		{
			close(fd);
			return (0);
		}
		else
		{
			bytes_wrote = write(STDOUT_FILENO, buffer, letters);
			if (bytes_wrote == -1)
			{
				close(fd);
				return (0);
			}
			else
			{
				close(fd);
				return (bytes_num);
			}
		}
	}
}
