#include "main.h"
/**
 *clear_bit - set the value of a bit to zero
 *@n: the number to change
 *@index: the beginning of number to change
 *
 *Return: one on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 63;

	if (index > num)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
