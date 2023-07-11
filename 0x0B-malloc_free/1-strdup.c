#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strdup -  function that returns a pointer
  *to a newly allocated space in memory
  * which contains a copy of the str given as a parameter
  *@str: the string to be clone
  *Return: Pointer to the duplicated string, if str = NULL
  */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int leng = 0;
	unsigned int n;

	if (str == NULL)
		return (NULL);

	while (str[leng] != '\0')
		leng++;

	duplicate = (char *)malloc(sizeof(char) * (leng + 1));

	if (duplicate == NULL)
		return (NULL);

	for (n = 0; n <= leng; n++)
		duplicate[n] = str[n];

	return (duplicate);
}
