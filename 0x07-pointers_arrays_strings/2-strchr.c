#include "main.h"
#include <string.h>
/**
 *_strchr - returns the first occurence of c
 *@s: the string to be checked
 *@c: checks for char c
 *
 *Return: the first address of the first occurence
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
