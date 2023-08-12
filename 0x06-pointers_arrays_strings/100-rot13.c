#include "main.h"
#include <stdio.h>
/**
  *rot13 - function that encodes a string using rot13
  *@str: string to encode
  *Return: always 0
  */

char *rot13(char *str)
{
	char *ptr = str;
	char c;

	if (str == NULL)
		return (NULL);

	while (*ptr != '\0')
	{
		c = *ptr;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
			{
				c += 13;
			} else
			{
				c -= 13;
			}
		}

		*ptr = c;
		ptr++;
	}

	return (str);
}
