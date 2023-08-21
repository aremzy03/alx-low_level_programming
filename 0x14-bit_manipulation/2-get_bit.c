#include "main.h"
/**
 * get_bit - returns the value of bit at an index
 *@n: value to search
 *@index: index of bit
 *
 *Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
