#include "main.h"
/**
  *append_text_to_file - function that appends text at the end
  *                of a file
  *
  *@filename: the name of the file
  *@text_content: the file content to append
  *Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int count, o, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		count = strlen(text_content);
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

		return (1);
}
