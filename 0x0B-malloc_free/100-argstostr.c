#include "main.h"
#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int i,j,k = 0, l = 0;
	char *av_ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	
	av_ptr = malloc((l + 1) * sizeof(char));
	if (av_ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			av_ptr[k] = av[i][j];
		}	k++;
	}
	if (av_ptr[k] == '\0')
		av_ptr[k++] = '\n';
	return (av_ptr);
}
