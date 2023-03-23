#include "main.h"
/**
 *print_most_numbers - prints numbers 0-9 except 2 and 4
 *
 *Return: no return value
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}
