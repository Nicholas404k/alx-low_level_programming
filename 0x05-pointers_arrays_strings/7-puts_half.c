#include "main.h"
/**
  *puts_half - function should print the second half of the string
  *If the number of characters is odd
  *the function should print the last n
  *characters of the string
  @str: the string to be inputed
  */

void puts_half(char *str)
{
	int i, n, width;

	width = 0;

	for (i = 0; str[i] != '\0'; i++)
		width++;

	n = (width / 2);

	if ((width % 2) == 1)
		n = ((width + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
