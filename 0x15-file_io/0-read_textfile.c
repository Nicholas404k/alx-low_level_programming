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
	ssize_t w;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(file, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(file);
	return (w);

}
