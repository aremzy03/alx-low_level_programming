#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strdup - returns a copy of str
 *@str: the string to be copied
 *
 *Return: the copy of string or NULL
 */
char *_strdup(char *str)
{
	unsigned long int i;
	char *ptr_str;

	if (str == NULL)
		return (NULL);
	ptr_str = malloc(strlen(str) + 1);
	if (ptr_str == NULL)
		return (NULL);
	for (i = 0; i <= strlen(str); i++)
	{
		ptr_str[i] = str[i];
	}
	return (ptr_str);
	free(ptr_str);
}
