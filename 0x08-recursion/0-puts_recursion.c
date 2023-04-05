#include "main.h"
/**
 *_puts_recursion - prints the character s using a recursive function
 *@s: the string to be printed
 *
 *Return: no return value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
