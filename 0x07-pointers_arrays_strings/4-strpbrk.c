#include "main.h"
/**
  *_strpbrk - func that searches a str for any of a set of bytes
  *@s: the input
  *@accept: the input
  *Return: always 0
  */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}

	return ('\0');
}
