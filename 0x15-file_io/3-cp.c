#include "main.h"
/**
  *printerr - function that prints errors
  *@mesg: the error to print
  *@file: the name of the file
  *@e: the exit status
  *Return: void
  */

void printerr(char *mesg, char *file, int e)
{
	dprintf(STDERR_FILENO, "%s%s\n", mesg, file);
	exit(e);
}

/**
  *main - Copies the contents of a file to another file
  *@argc:The number of arguments supplied to the program
  *@argv: An array of pointers to the arguments
  *Return: always 0
  */

int main(int argc, char **argv)
{
	int dest, src, r, w;
	char buffer[1024];

	if (argc != 3)
		printerr("Usage: cp file_from file_to", "", 97);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest == -1)
		printerr("Error: Can't write to ", argv[2], 99);
	src = open(argv[1], O_RDONLY);

	if (src == -1)
		printerr("Error: Can't read from file ", argv[1], 98);

	do {
		r = read(src, buffer, 1024);
		if (r == -1)
			printerr("Error: Can't read from file ", argv[1], 98);

		w = write(dest, buffer, r);
		if (w == -1 || w != r)
			printerr("Error: Can't write to ", argv[2], 99);
	} while (w == 1024);

	if (close(src))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	return (0);
}
