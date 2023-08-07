#include  "main.h"
/**
  *create_file - function that creates a file
  *
  *@filename: the name of the given filename and text content
  *@text_content: the content of the file
  *Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_written] != '\0')
			bytes_written++;
		bytes_written = write(fd, text_content, bytes_written);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
