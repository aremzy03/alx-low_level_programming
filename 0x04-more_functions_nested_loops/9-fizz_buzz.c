#include <stdio.h>
/**
 *main - prints 1-100 and replace multiples of 3,5 and both
 *with Fizz,Buzz and FizzBuzz Respectively
 *
 *Return: Always Zero(0)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
