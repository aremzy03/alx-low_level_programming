#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the diagonal of a square
 *@a: the array to be printed
 *@size: the size of the array
 *
 *Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int dia1, dia2, sizesq;

	sizesq = size * size;
	for (i = 0; i <= sizesq; i = i + size + 1)
	{
		dia1 += a[i];
	}
	for (j = size - 1; j <= sizesq - size; j = j + size - 1)
	{
		dia2 += a[j];
	}
	printf("%d, %d\n", dia1, dia2);
}
