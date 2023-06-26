#include "main.h"
/**
  *rev_string - function that reverses a string
  *@s: the string input
  */

void rev_string(char *s)
{
	char rev = s[0];
	int reader = 0;
	int n;

	while (s[reader] != '\0')
		reader++;
	for (n = 0; n < reader; n++)
	{
		reader--;
		rev = s[n];
		s[n] = s[reader];
		s[reader] = rev;
	}
}
