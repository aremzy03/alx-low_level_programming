#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - prints every other char statring with first
 *@str: the arguement string
 *
 *Return: nil
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	putchar('\n');
}
