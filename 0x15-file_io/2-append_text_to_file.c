#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: The name of the file
  * @text_content: The NULL terminating string to add at the end of the file
  *
  * Description - do not create the file if it does not exist.
  * If text_content is NULL, do not add anything to the file.
  *
  * Return: 1 on success.
  * Otherwise, return -1 on failure
  * If filename is NULL, return -1
  * If the file exists, return 1
  * Return -1 if the file does not exist or if you do not
  * have the required permissions to write the file
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			++len;
		}
	}
	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, text_content, len);
	if (o_file == -1 || w_file == -1)
	{
		return (-1);
	}
	close(o_file);
	return (1);
}
