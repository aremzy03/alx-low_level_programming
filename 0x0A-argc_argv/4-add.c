#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) === 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
