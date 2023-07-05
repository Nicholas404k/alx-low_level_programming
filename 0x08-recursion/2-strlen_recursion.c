#include "main.h"
/**
  *_strlen_recursion - function that returns the length of a string
  *@s: the str to be printed the length of
  *Return: length of string
  */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}

	return (leng);
}

