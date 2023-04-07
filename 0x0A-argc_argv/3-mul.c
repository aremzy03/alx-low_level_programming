#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the sum of the two arguements
 *@argc: number of arguements
 *@argv: the arguement list
 *
 *Return: zero(0) if successful & one(1) if failed
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
