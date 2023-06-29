#include "main.h"
/**
  *_strncpy - a function that copies a string.
  *@dest: the input
  *@src: the input
  *@n: the input
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}

	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
