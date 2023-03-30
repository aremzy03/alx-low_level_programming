#include "main.h"
#include <string.h>
char *cap_string(char *c)
{
	long unsigned int i;

	for (i = 0; i < strlen(c); i++)
	{
		switch (c[i])
		{
		case ' ':
			c[i + 1] -= 32;
			break;
		case '9':
			c[i + 1] -=32;
			break;
		case '\n':
			c[i + 1] -=32;
			break;
		case ',':
			c[i + 1] -=32;
			break;
		case ';':
			c[i + 1] -=32;
			break;
		case '.':
			c[i + 1] -= 32;
			break;
		case '!':
			c[i + 1] -= 32;
			break;
		case '?':
			c[i + 1] -= 32;
			break;
		case '"':
			c[i + 1] -= 32;
			break;
		case '(':
			c[i + 1] -= 32;
			break;
		case ')':
			c[i + 1] -= 32;
			break;
		case '{':
			c[i + 1] -= 32;
			break;
		case '}':
			c[i + 1] -= 32;
			break;
		default :
			;
		}
	}
	return (c);
}
