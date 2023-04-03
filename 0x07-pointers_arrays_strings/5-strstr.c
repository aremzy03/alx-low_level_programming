#include "main.h"
#include <string.h>
/**
 *_strstr - finds the first occurence of the substring needle in haystack
 *@haystack: the first arguement
 *@needle: the second arguement
 *
 *Return: the strstr.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
