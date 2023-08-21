#include "main.h"
#include <stdio.h>
/**
 *print_binary - coverts int to binary and prints it
 *@n: then integer to be printed
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
