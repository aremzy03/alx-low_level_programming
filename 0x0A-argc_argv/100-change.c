#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the number of coins needed for change
 *@argc: the number of arguements
 *@argv: the arguement lists
 *
 *Return: always zero
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int numcoins;
	int change;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i  = 0;
	numcoins = 0;
	change = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		numcoins += (change / coins[i]);
		if (change % coins[i] == 0)
			break;
	}
	printf("%d\n", numcoins);
	return (0);
}
