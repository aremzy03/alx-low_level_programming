#include "main.h"
/**
 *times_table - prints the times table up till 9
 *
 *Return: no retuen value
 */
void times_table(void)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (y < 10)
	{
		while (x < 10)
		{
			x *= y;
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			x++;
		}
		y++;
	}
}
