#include "main.h"
#include <string.h>
/**
 *_strpbrk - returns a pointer to the first occurrence of string s
 * of any of the bytes in the string accept
 *@s: the string to be checked
 *@accept: the second arguement
 *
 *Return: the strpbrk of char s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
