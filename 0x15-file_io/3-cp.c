#include "main.h"
/**
 * _close - closes a file descriptor
 * @fd: file descriptor;
 * Return: 0 if success, otherwise -1
 */
void _close(int fd)
{
	int check;

	check = close(fd);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: serves as number of arguments passed by the user
 * @argv: pointer to pointer to arguemnts passed
 * Return: 0 if succeeded
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];
	int fdd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	bytes_read = read(fd, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else
	{
		fdd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fdd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		bytes_written = write(fdd, buffer, 1024);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	_close(fd);
	_close(fdd);

	return (0);
}
