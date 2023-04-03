#include "main.h"
#include <string.h>
/**
 *_memset - returns memset of an array
 *@s: this where the array is pointed to
 *@b: the constant byte
 *@n: the first number of bytes of memory area
 *
 *Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
