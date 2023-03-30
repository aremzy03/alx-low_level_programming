#include "main.h"
#include <string.h>
/**
 *_strncat - returns a concatinated of size n
 *@dest: the first to concat
 *@src: the second string to concat
 *@n: the size of the concatinated string
 *
 *Return: the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
