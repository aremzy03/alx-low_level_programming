#include "main.h"
#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int i;
	char **av_ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	av_ptr = malloc(ac * sizeof(char *));
	for (i = 0; i < ac; i++)
	{
		av_ptr[i] = malloc(strlen(av[i]) * sizeof(char));
	}
	if (*av_ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		av_ptr[i] = av[i];
	}
	for (i = 0; i < ac; i++)
	{
		free(av_ptr[i]);
	}
	return (*av_ptr);
}
