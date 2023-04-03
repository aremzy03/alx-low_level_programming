#include "main.h"
void print_number(int n)
{
	int temp;

	
	if (n > 9 || n < -9)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 || n < -99)
	{
		temp = n / 100;
		_putchar(temp + '0');
		temp = (n / 10) % 10;
		_putchar(temp + '0');
		temp = n % 10;
		_putchar(temp + '0');
	}
	_putchar('\n');
}
