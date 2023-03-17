#include <stdio.h>
/**
 *main - prints the alphabets backwords
 *
 *Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
