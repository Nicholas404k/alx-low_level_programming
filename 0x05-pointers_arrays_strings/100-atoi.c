#include "main.h"
#include <limits.h>
#include <stdbool.h>
/**
  *_atoi - function that converts a string to an integer
  *@s: the string to convert to an integer
  *Return: the int converted from the string
  */

int _atoi(char *s)
{
	int digit;
	int result = 0;
	int sign = 1;
	bool foundNumber = false;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			continue;
		if (s[i] == '-' || s[i] == '+')
		{
			if (foundNumber)
				break;
			sign = (s[i] == '-') ? -1 : 1;
			continue;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			foundNumber = true;
			digit = s[i] - '0';
			if (sign == 1 && result > (INT_MAX / 10))
				return (0);
			else if (sign == 1 && result == (INT_MAX / 10) && digit > (INT_MAX % 10))
				return (0);
			else if (sign == -1 && -result < (INT_MIN / 10))
				return (0);
			else if (sign == -1 && -result == (INT_MIN / 10) && -digit < (INT_MIN % 10))
				return (0);
			result = (result * 10) + (sign * digit);
		} else
		{
			if (foundNumber)
				break;
		}
	}
	return (result);
}
