#include "main.h"
void print_diagonal(int n)
{
	int i;
	int j;
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
