#include "main.h"
/**
 *print_line - prints a straight line
 *@n: the number of times the line is printed
 *
 *Return: no return value
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
