#include "main.h"
#include <stdio.h>
/**
  *_atoi - Program that converts a dtring to an integer
  *@s: the string
  *Return: the number converted
  */

int _atoi(char *s)
{
	int m, d, n, leng, f, digit;

	m = 0;
	d = 0;
	n = 0;
	leng = 0;
	f = 0;
	digit = 0;

	while (s[leng] != '\0')
		leng++;

	while (m < leng && f == 0)
	{
		if (s[m] == '-')
			d++;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;

			f = 0;
		}
		m++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
  *main - the multiplies two numbers
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: 0 (success),1 (Error)
  */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
