#include "main.h"
/**
 *flip_bits - returns number of bits to flip to get
 *a number to another
 *@n: first number
 *@m: second number
 *
 *Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int currnt, exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currnt = exc >> i;
		if (currnt & 1)
			j++;
	}
	return (j);
}
