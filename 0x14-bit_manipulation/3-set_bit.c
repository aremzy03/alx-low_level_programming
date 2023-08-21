#include "main.h"
/**
 *set_bit - set value of bit to 1 at given index
 *@n: the number to change
 *@index: the index of the value
 *
 *Return: value that was set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL <<  index) | *n);
	return (1);
}
