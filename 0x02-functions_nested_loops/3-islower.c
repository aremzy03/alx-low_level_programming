#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if a char is lowercase
 *@c: is the character to test
 *
 *Return: No return value
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
