#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *str_concat - function that concatenates two strings.
  *@s1: the string
  *@s2: the second string
  *Return: Ptr to the newly allocated concatenated string,
  *NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	char *concates;
	int leng1;
	int leng2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	leng1 = strlen(s1);
	leng2 = strlen(s2);

	concates = malloc((leng1 + leng2 + 1) * sizeof(char));

	if (concates == NULL)
		return (NULL);

	strcpy(concates, s1);
	strcat(concates, s2);

	return (concates);
}
