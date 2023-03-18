#include <stdio.h>
/**
 *main - prints long and complicated combinations of numbers
 *
 *Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a + b < 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
