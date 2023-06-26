#include "main.h"
/**
  *puts2 - function that prints every other character of a string
  *starting with the first character, followed by a new line
  *@str: the string to be printed
  */

void puts2(char *str)
{
	int width = 0;
	int n = 0;
	char *g = str;
	int o;

	while (*g != '\0')
	{
		g++;
		width++;
	}
	n = width - 1;
	for (o = 0; o <= n; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
