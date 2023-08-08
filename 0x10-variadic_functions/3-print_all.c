#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;
	va_start(list, format);
	while (*format != '\0')
	{
		switch (format[i])
		{
		case 'c':
			putchar (va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			printf("%s", va_arg(list, char *));
			break;
		default :
			continue;
		}
		i++;
	}
	putchar ('\n');
	va_end(list);
}
