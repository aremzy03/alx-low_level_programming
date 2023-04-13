#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatinates the s1 and s2
 *@s1: the first string
 *@s2: the second string
 *@n: the size of the string
 *
 *Return: the concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned long int i, j, length;

	length = strlen(s1) + strlen(strndup(s1, n));
	concat = malloc(length);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j <= strlen(strndup(s1, n)); j++)
	{
		concat[i + j] = s2[j];
	}
	return (concat);
}
