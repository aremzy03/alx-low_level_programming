#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - prints a string with a seperator
 *@separator: the character that seperates the numbers
 *@n: the number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		if (separator != NULL)
		{
			if (i == n - 1)
			{
				printf("%s", va_arg(list, char *));
			}
			else
			{
				printf("%s", va_arg(list, char *));
				printf("%s", separator);
			}
		}
		else
		{
			printf("%s", va_arg(list, char *));
		}
	}
	putchar('\n');
}
