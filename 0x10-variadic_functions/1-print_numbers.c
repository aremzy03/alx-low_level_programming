#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints list of numbers with a separator
 *@separator: the character that seperates the numbers
 *@n: the number of arguements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(list, int));
			}
			else
			{
				printf("%d", va_arg(list, int));
				printf("%s", separator);
			}
		}
		else
		printf("%d", va_arg(list, int));
	}
	putchar('\n');
}
