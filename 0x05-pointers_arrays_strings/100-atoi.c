#include "main.h"
#include <stdlib.h>
#include <string.h>
int _atoi(char *s)
{
	long unsigned int i;

	for (i = 0; i <= strlen(s) - 1; i++)
	{
		if (strlen(s) != 0)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				return (atoi(s));
			}
			else
			{
				continue;
			}
		}
	}
	return (0);
}
