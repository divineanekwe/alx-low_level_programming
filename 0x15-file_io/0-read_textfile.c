#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the
  * POSIX standard output
  * @filename: Pointer to filename
  * @letters: Number of letters it should read and print
  *
  * Return: The actual number of letters it could read and print.
  * If the file can not be opened read, return 0
  * If filename is NULL, return 0
  * If write fails or does not write the expected amount of bytes, return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o_file, r_file, w_file;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, r_file);
	if (o_file == -1 || r_file == -1 || w_file == -1 || w_file != r_file)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o_file);

	return (w_file);
}
