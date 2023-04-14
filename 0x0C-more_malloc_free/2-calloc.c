#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - finds the calloc of two arguements
 *@nmemb: the first arguement
 *@size: the second arguement
 *
 *Return: the calloc of the arguements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	call = malloc(nmemb * size);
	if (call == NULL)
		return (NULL);
	memset(call, 0, nmemb * size);
	return (call);
}
