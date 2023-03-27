#include "main.h"
#include <string.h>
/**
 *rev_string - reverses a string
 *@s: the string to be reversed
 *
 *Return: nil
 */
void rev_string(char *s)
{
	int i, j;
	char rev;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
