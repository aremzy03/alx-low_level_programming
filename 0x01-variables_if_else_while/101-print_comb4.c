#include <stdio.h>
int main(void)
{
	int a, b, c;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10 ; b++)
		{
			for (c = 0; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
			}
		}
	}
	return (0);
}
