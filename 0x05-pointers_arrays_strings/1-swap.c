#include "main.h"
/**
 *swap_int - swaps the value of a and b
 *@a: the first arguement
 *@b: the second arguement
 *
 *Return: none
 */
void swap_int(int *a, int *b)
{

	int tempv = 0;

	tempv = *a;
	*a = *b;
	*b = tempv;
}
