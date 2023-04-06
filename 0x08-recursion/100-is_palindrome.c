#include "main.h"
#include <stdio.h>
/**
 *palindrome - converts string to reverse
 *@s: the string to be reversed
 *
 *Return: the reversed string
 */
char palindrome(char *s)
{
	if (*s == '\0')
		return ('\0');
	palindrome(s + 1);
	return (*s);
}
/**
 *is_palindrome - compares the strings
 *@s: the normal strings
 *
 *Return:  1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == palindrome(s))
	{
		return (1);
	}
	return (0);
	return (is_palindrome(s + 1));
}
