#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	int size = sizeof(unsigned int) * 8;
	int cover = 1 << (size - 1);
	int first = 1;
	int binary[32];
	int count = 0;

	while (cover > 0)
	{
		if ((n & cover) == 0)
		{
			if (!first)
				binary[count] = 0;
		}
		else
		{
			binary[count] = 1;
			first = 0;
		}
		cover >>= 1;
		count++;
	}
	return(binary[index]);
}
