#include "main.h"
/**
 *sqroot - finds the square root of n
 *@n: the arguement
 *@i: the counter
 *
 *Return: the square root
 */
int sqroot(int n, int i)
{
	int squroot;

	squroot = i * i;
	if (n < squroot)
		return (-1);
	if (n == squroot)
		return (i);
	return (sqroot(n, i + 1));
}
/**
 *_sqrt_recursion - prints the square root
 *@n: the arguement
 *
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
