#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *main - prints the file name of the program
 *
 *Return: always zero(0)
 */
int main(void)
{
	const char *file  = __FILE__;

	while (*file)
	{
		_putchar(*file);
		file++;
	}
	_putchar('\n');
	return (0);
}
