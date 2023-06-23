#include "main.h"
#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	int i;
	va_list format;
	for (i = 0, format[i] != '\0'; i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c",va_arg(format, char));
		case 'i':
			printf(va_arg(format, int));
			case ''
		}
	}
