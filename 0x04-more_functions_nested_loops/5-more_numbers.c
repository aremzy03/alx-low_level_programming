#include "main.h"
/**
 *more_numbers - prints 1-14 10 times
 *
 *Return: no return value
 */
void more_numbers(void)
{
	int num;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
