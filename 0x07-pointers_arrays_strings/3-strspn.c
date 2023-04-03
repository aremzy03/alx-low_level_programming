#include "main.h"
#include <string.h>
/**
 *_strspn - calculates the length of initial segment of s
 *@s: the location of the segment
 *@accept: the second arguement
 *
 *Return: the strspn.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
