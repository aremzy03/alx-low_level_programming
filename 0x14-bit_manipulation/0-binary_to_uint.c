#include "main.h"
#include <string.h>
#include <math.h>
/**
 *binary_to_uint - converts binary to decimal
 *@b: the value in binary to be converted
 *
 *Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int count;

	decimal = 1;
	if (!b)
		return (0);
	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		decimal = 2 * decimal + (b[count] - '0');
	}
	return (decimal);
}
