#include "main.h"
/**
  *_strchr - function that locates a character in a string
  *@s: the string
  *@c: the character
  *Return: always 0
  */

char *_strchr(char *s, char c)
{
	int p = 0;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}
