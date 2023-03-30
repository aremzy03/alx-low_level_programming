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

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
