#include <stdio.h>
/**
 *main - prints the number of arguments passed
 *@argc: the number of arguementds
 *@argv: the arguements passed
 *
 *Return: always zero(0)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
