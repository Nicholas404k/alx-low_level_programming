#include "main.h"
/**
  *_strlen - function that returns the length of a string
  *@s: the string
  *Return: length
  */

int _strlen(char *s)
{
	int width = 0;

	while (*s != '\0')
	{
		width++;
		s++;
	}

	return (width);
}
