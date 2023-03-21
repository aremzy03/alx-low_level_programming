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
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
