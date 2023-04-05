#include "main.h"
/**
 *_pow_recursion - finds the value of x ^ y
 *@x: is the mantisa
 *@y: is the  power
 *
 *Return: the equivalent of x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
