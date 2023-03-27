#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - puts half of a string array
 *@str: the string to be printed
 *
 *Return: nil
 */
void puts_half(char *str)
{
	unsigned long int i;
	unsigned long int len, half_len, half_lenodd;

	len = strlen(str);
	half_len = len / 2;
	half_lenodd = (len - 1) / 2;
	if (strlen(str) % 2 != 0)
	{
		for (i = half_lenodd + 1; i <= len - 1; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = half_len; i <= len - 1; i++)
		{
			printf("%c", str[i]);
		}
	}
	putchar('\n');
}
