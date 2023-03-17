#include <stdio.h>
/**
 *main - prints numbers 0-9 using putchar()
 *
 *Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
