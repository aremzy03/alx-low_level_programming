#include "function_pointers.h"
/**
 *print_name - prints name in function
 *@name: the name to be printed
 *@f: the function to return name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
