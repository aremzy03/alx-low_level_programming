#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev - prints the string in reverse
 *@s: the string to be reversed
 *
 *Return: nil
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
