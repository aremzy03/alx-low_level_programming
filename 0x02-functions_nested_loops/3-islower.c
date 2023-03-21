#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if a char is lowercase
 *
 *Return: No return value
 */
int _islower(int c)
{
	if (islower(c))
	{
		return(1);
	}else
	{
		return(0);
	}
}
