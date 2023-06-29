#include "main.h"
/**
  *leet - function that encodes a string into 1337
  *@n: the input
  *Return: n value
  */

char *leet(char *n)
{
	int m, p;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[m] == s1[p])
			{
				n[m] = s2[p];
			}
		}
	}
	return (n);
}
