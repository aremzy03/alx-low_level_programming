#include "main.h"
/**
 *leet - converts the string to a leet code
 *@str: the string to be converted
 *
 *Return: the converted string
 */
char *leet(char *str)
{
	int i, j;
	char *alpha;
	char *num;

	alpha = "aAeEoOtTlL";
	num = "4433007711";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
