#include "main.h"
/**
 *get_endianness - checks the endiannes of a machine
 *
 *Return:0 or 1 for big & little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *d = (char *) &a;

	return (*d);
}
