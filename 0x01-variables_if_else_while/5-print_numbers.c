#include <stdio.h>
/**
 *main - prints numbers 1-9
 *
 *Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
