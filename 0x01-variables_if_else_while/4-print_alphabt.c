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
		if (alpha == 'q')
		{
			continue;
		} else if (alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
