#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *main - prints the sum of the arguements
 *@argc: the number of arguements
 *@argv: the arguement list
 *
 *Return: zero(0) if success and one(1) if failed.
 */
int main(int argc, char *argv[])
{
	int i, sum;
	unsigned long int j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
