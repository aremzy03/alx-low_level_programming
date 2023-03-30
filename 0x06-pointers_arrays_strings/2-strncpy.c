#include "main.h"
#include <string.h>
/**
 *_strncpy - copies the string from src to dest
 *@dest: the location of the copied string
 *@src: the string to be copied
 *@n: size of string to be copied
 *
 *Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
