#include "main.h"
/**
  *_strncat - a function that concatenates two strings
  *using at most n bytes from src
  *@dest: the input
  *@src: the input
  *@n: the input
  *Return: void
  */

char *_strncat(char *dest, char *src, int n)
{
	int g;
	int m;

	g = 0;

	while (dest[g] != '\0')
	{
		g++;
	}

	m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[g] = src[m];
		g++;
		m++;
	}

	dest[g] = '\0';
	return (dest);
}
