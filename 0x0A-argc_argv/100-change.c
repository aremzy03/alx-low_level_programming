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
	int mod0, mod1, mod2, mod3, mod4;

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
		if (change < coins[i])
			continue;
		numcoins += (change / coins[i]);
		break;
	}
	mod0 = change % coins[0];
	mod1 = mod0 % coins[1];
	mod2 = mod1 % coins[2];
	mod3 = mod2 % coins[3];
	mod4 = mod3 % coins[4];
	if (mod0 == 0)
		printf("%d\n", numcoins);
	else
	{
		numcoins += mod0 / coins[1];
		if (mod1 == 0)
			printf("%d\n", numcoins);
		else
		{
			numcoins += mod1 / coins[2];
			if (mod2 == 0)
				printf("%d\n", numcoins);
			else
			{
				numcoins += mod2 / coins[3];
				if (mod3 == 0)
					printf("%d\n", numcoins);
				else
				{
					numcoins += mod3 / coins[4];
					if (mod4 == 0)
					printf("%d\n", numcoins);
				}
			}
		}
	}
	return (0);
}
