#include "main.h"
#include <string.h>
/**
 *cap_string - capsulate every word
 *@c: string to be capsulated
 *
 *Return: the capsulated string
 */
char *cap_string(char *c)
{
        int i;

	for (i = 0; c[i] != '\0'; i++)
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
