#include "main.h"
/**
  *read_textfile - function that reads a text file
  *     and prints it to the POSIX standard output.
  *
  *@filename: the name of the fie to read
  *@letters: the numbers of letters to read and print
  *Return: The actual number of letters read and
  *                  printed, or 0 on failure
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t file;
	ssize_t w = 0;
	ssize_t t = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	b = malloc(sizeof(char) * letters);

	if (b == NULL)
	{
		close(file);
		free(b);
		return (0);
	}

	w = write(STDOUT_FILENO, b, t);

	if (w != t)
	{
		close(file);
		free(b);
		return (0);
	}

	free(b);
	close(file);

	return (w);
}
