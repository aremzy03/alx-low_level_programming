#include "main.h"
/**
 *print_sign - prints the number signs of an integer
 *@n: is the arguement for the function
 *
 *Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0' + 0);
	return (0);
}
