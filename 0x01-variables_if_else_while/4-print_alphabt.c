#include <stdio.h>
/**
 *main - prints alpabets a-z excluding q and e
 *
 *Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
		{
			continue;
		}
		if (alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
