#include "main.h"
#include <string.h>
#include <math.h>
/**
 *binary_to_unit - converts binary to decimal
 *@b: the value in binary to be converted
 *
 *return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int decimal;
	unsigned int i;
	int count;

	length = strlen(b);
	decimal = 1;
	if (b == NULL)
		return (0);
	for (count = length-1; count >= 0; count--)
	{
		if (b[count] != '0' || b[count] != '1')
			return (0);
		if(b[count] == '1')
			i += decimal;
		decimal *= 2;
	}
	return (decimal);
}
