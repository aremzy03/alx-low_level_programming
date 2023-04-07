#include <stdio.h>
/**
*main - prints the program name
*@argc: the first arguement
*@argv: the second arguement
*
*Return: always zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
