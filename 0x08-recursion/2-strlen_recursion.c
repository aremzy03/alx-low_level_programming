#include "main.h"
/**
 *_strlen_recursion - counts the characters in the string
 *@s: the string to be counted
 *
 *Return: the number of strings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return o(0);
	}
	return (1 + _strlen_recursion(s + 1));
}
