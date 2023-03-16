#include <stdio.h>
#include <string.h>
/**
 *main - print a message in standard error
 *
 *Return: 1
 */
int main(void)
{
	const char *err;
	err = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(err, sizeof(char), strlen(err), stderr);
	return (1);
}
