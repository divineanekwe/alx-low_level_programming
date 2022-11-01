#include "main.h"

/**
  * create_buffer - Allocates 1024 bytes for a buffer.
  * @filename: The name of file buffer
  *
  * Return: Pointer to the newly allocated buffer
  */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
  * close_file - closes file descriptor
  * @fd: The file descriptor to close
  *
  * Return: Void (nothing)
  */
void close_file(int fd)
{
	int n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * main - copies the content of a file into another file
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: 0 on success.
  * If the argument count is incorrect, exit with code 97.
  * If file_from does not exist or cannot be read, exit with code 98.
  * If file_to cannot be created or written to, exit with code 99.
  * If file_to or file_from cannot be closed, exit with code 100.
  */
int main(int argc, char **argv)
{
	char *buffer;
	int file_from, file_to, r_file, w_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r_file = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || r_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w_file = write(file_to, buffer, r_file);
		if (file_to == -1 || w_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r_file = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_file > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
