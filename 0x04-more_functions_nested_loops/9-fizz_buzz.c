#include <stdio.h>
/**
 *main - prints 1-100 and replace multiples of 3,5 and both
 *with Fizz,Buzz and FizzBuzz Respectively
 *
 *Return: Always Zero(0)
 */
int main(void)
{
	char i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
