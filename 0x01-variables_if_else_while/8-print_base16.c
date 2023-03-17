#include <stdio.h>
/**
 *main - prints the value of hex values of 0 - 15
 *
 *Return: 0
 */
int main(void)
{
	int hex;

	hex = 0;
	while (hex < 16)
	{
		if (hex < 10)
		{
			putchar(hex + '0');
		} else
		{
			putchar(hex - 10 + 'a');
		}
		hex++;
	}
	putchar('\n');
	return (0);
}
