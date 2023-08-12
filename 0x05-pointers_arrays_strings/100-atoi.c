#include "main.h"
/**
  *_atoi - function that converts a string to an integer
  *@s: the string to convert to an integer
  *Return: the int converted from the string
  */

int _atoi(char *s)
{
	int i = 0;
	int d, num, len, found, digit;

	d = 0;
	num = 0;
	found = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && found == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			num = num * 10 + digit;
			found = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			found = 0;
		}
		i++;
	}

	if (found == 0)
		return (0);

	return (num);
}
