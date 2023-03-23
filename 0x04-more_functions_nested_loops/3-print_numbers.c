#include "main.h"
/**
 *print_numbers - prints integers 0-9
 *
 *Return: no return value
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
