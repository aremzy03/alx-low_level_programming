#include "main.h"
#include <ctype.h>
#include <string.h>
char *string_toupper(char *c)
{
	int i;
	int size;

	size = strlen(c);
	i = 0;
	while (i < size - 1)
	{
		return (toupper(c[i]));
		i++;
	}
}
