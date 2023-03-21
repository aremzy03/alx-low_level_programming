#include <stdio.h>
int main(void)
{
	int mult;
	int result;

	result = 0;
	for (mult = 0; mult < 1024; mult++)
	{
		if (mult % 3 != 0 || mult % 5 != 0)
		{
			continue;
		}
		result+=mult;
	}
	printf("%d\n", result);
	return (0);
}
		
