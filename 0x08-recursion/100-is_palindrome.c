#include "main.h"

int _strlen_recur(char *s);
int verify_pal(char *s, int i, int leng);

/**
  *is_palindrome - function that returns 1
  *if a string is a palindrome and 0 if no
  *@s: the string
  *Return: 1 when it is, 0 it's not
  */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (verify_pal(s, 0, _strlen_recur(s)));
}

/**
  *_strlen_recur - function that returns the length of a string
  *@s: the string
  *Return: the lenghth of the string
  */

int _strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recur(s + 1));
}

/**
  *verify_pal - functions that checks the characters
  *recursively for palindrome
  *@s: the string to be check
  *@i: iterator
  *@leng: the length of the string
  *Return: 1 if palindrome, 0 if not
  */

int verify_pal(char *s, int i, int leng)
{
	if (*(s + i) != *(s + leng - 1))
		return (0);
	if (i >= leng)
		return (1);
	return (verify_pal(s, i + 1, leng - 1));
}
