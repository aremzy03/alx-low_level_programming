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

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
				_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
