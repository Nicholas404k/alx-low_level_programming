#include "main.h"
/**
  *_strstr - function that locates a substring
  *@haystack: the input
  *@needle: the input
  *Return: always 0
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *m = needle;

		while (*p == *m && *m != '\0')
		{
			p++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
