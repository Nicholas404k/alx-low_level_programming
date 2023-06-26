#include "main.h"
/**
  *print_rev - function that prints a string, in reverse
  *@s: the string
  */

void print_rev(char *s)
{
	int width = 0;
	int i;

	while (*s != '\0')
	{
		width++;
		s++;
	}
	s--;
	for (i = width; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
