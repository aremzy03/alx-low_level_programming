#include "main.h"
#include <unistd.h>
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}



/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
/**
 *_puts - prints out a string
 *@s: the string to be outputted
 *
 *Return: nil
 */
void _puts(char *s)
{

}
/**
 *_strcpy - copies string to dest
 *@dest: the location of the copies string
 *@src: the string to be copied
 *
 *Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{

}
