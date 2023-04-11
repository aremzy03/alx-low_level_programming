#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *str_concat - concatinates two strings together
 *@s1: the first string
 *@s2: the second string
 *
 *Return: the concatinated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int size = strlen(s1) + strlen(s2) + 1;
	char *ptr_concat;
	unsigned long int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr_concat = malloc(size);
	if (ptr_concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr_concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr_concat[i + j] = s2[j];
	}
	return (ptr_concat);
}
