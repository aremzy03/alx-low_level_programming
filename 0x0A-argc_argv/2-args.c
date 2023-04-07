#include <stdio.h>
/**
 *main - prints the all the arguements with a newline
 *@argc: the number of arguements
 *@argv: the array of arguements
 *
 *Return: always zero(0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
