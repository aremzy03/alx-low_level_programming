#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverses the array @a
 *@a: the array to be reversed
 *@n: the size of the array
 *
 *Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i--;
	}
	printf("\n");
}
