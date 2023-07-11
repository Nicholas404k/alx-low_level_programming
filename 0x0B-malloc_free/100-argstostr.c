#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *argstostr - function that concatenates
  *all the arguments of your program
  *@ac: the arguments
  *@av: the arguments v
  *Return: pointer to a new string
  *or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int n, m, total_leng;
	char *s, *p;
	int leng;

	total_leng = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		leng = strlen(av[n]);
		total_leng += (leng + 1);
	}

	s = malloc(sizeof(char) * total_leng + 1);

	if (s == NULL)
		return (NULL);

	p = s;

	for (n = 0; n < ac; n++)
	{
		leng = strlen(av[n]);

		for (m = 0; m < leng; m++)
			*p++ = av[n][m];

		*p++ = '\n';
	}

	*p = '\0';

	return (s);
}
