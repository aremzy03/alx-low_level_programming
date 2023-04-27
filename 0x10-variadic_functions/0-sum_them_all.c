#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all integers passed to an arguement
 *@n: thse  number of arguements
 *
 *Return: 0 if failed and sum if success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
