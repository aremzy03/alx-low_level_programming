#include <stdio.h>
#include <math.h>
/**
 *main - the main function
 *
 *Return: Always 0
 */
int main(void)
{
	long i, primef, num;
	double square;

	num = 612852475143;
	square = sqrt(num);
	for (i = 0; i <= square; i++)
	{
		if (num % i == 0)
		{
			primef = num / i;
		}
	}
	printf("%ld\n", primef);
	return (0);
}
