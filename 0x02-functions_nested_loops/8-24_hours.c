#include "main.h"
/**
 *jack_bauer - prints the every minutses in 24 hrs
 *
 *Return: no return value
 */
void jack_bauer(void)
{
	int min;
	int sec;

	for (min = 0; min < 24; min++)
	{
		for (sec = 0; sec < 60; sec++)
		{
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(':');
			_putchar((sec / 10) + '0');
			_putchar((sec % 10) + '0');
			_putchar('\n');
		}
	}
}
