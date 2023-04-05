#include "main.h"
/**
 *factorial - finds the factorial of n
 *@n: the argurment of the function
 *
 *Return: the result of the function
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
