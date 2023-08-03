#include "main.h"
#include <stddef.h>
/**
  *binary_to_uint - function that converts a binary
  *                number to an unsigned int
  *@b: pointer to string of 0 and 1 chars
  *Return: converted number, or 0 if there is
  *       one or more chars in thestring b
  *      that is not 0 or 1, or if b is NULL.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n = n * 2 + (b[i] - '0');
		i++;
	}

	return (n);
}
