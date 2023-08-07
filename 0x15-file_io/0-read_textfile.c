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
	FILE *file;
	char *b;
	size_t num_read = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	b = malloc(letters + 1);

	if (b == NULL)
	{
		fclose(file);
		return (0);
	}

	num_read = fread(b, sizeof(char), letters, file);

	if (num_read <= 0)
	{
		fclose(file);
		free(b);
		return (0);
	}

	b[num_read] = '\0';

	if (fwrite(b, sizeof(char), num_read, stdout) != num_read)
	{
		fclose(file);
		free(b);
		return (0);
	}
	fclose(file);
	free(b);
	return (num_read);
}
