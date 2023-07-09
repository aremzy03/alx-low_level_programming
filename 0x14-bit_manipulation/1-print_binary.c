#include "main.h"
#include <stdio.h>
/**
 *print_binary - coverts int to binary and prints it
 *@n: then integer to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned int size = sizeof(int) * 8;
	unsigned int cover = 1 << (size - 1);
	unsigned int beginning = 1;

	if (n == 0)
		_putchar('0');
	_putchar('\n');
	while (cover > 0)
	{
		if ((n & cover) == 0)
		{
			if (!beginning)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			beginning = 0;
		}
		cover >>= 1;
	}
	_putchar('\n');
}
