#include "main.h"
/**
  *_strspn - func that gets the length of a prefix substring
  *@s: the string
  *@accept: it accepts the value
  *Return: n value
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				n++;
				break;
			}

			else if (accept[p + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
