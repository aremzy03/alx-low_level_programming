#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks weather a char is an alphabet
 *@c: is the arguement for _isalpha
 *
 *Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
