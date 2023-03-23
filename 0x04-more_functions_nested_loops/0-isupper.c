#include "main.h"
#include <ctype.h>
/**
 *_isupper - checks if a character is uppercase
 *@c: is the arguement for the function
 *
 *Return: 1 if positive else 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
