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
	while (alpha <= 'z')
	{
		if (alpha == 'e')
		{
			continue;
		} else if (alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
