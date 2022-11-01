#include "main.h"

/**
  * create_file - creates a file
  * @filename: The name of the file to create
  * @text_content: A NULL terminated string to write to the file
  *
  * Description: The file must have these permissions: rw-------.
  * If the the file already exists, do not change the permissions.
  * If the file already exists, truncate it.
  * If text_content is NULL, create an empty file
  *
  * Return: 1 on success.
  * -1 on failure (file can not be created, file can not be written,
  * write "fails", etc...).
  * If filename is NULL, return -1
  */
int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			++count;
		}
	}
	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, count);
	if (o_file == -1 || w_file == -1)
	{
		return (-1);
	}
	close(o_file);
	return (1);
}
