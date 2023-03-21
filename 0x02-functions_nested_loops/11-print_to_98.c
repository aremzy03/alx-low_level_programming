#include "main.h"
#include "stdio.h"
/**
 *print_to_98 - prints integers from a desired a value to 98
 *@n: the arguement for the function
 *
 *Return: no return value
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 99)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	while (n < 99)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
}
