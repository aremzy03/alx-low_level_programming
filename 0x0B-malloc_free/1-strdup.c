#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strdup - returns a copy of str
 *@str: the string to be copied
 *
 *Return: the copy or NULL
 */
char *_strdup(char *str)
{
	unsigned long int i;
	char *ptr_str;

	if (str == NULL)
		return (NULL);
	ptr_str = malloc(strlen(str));
	for (i = 0; i <= strlen(str); i++)
	{
		ptr_str[i] = str[i];
	}
	if (ptr_str != NULL)
		return (ptr_str);
	else
		return (NULL);
	free(ptr_str);
}
