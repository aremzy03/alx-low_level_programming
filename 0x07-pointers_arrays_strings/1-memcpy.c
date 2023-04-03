#include "main.h"
#include <string.h>
/**
 *_memcpy - copies the first n memories of src to dest
 *@dest: the location of copied memory
 *@src: the content to copy
 *@n: the number of bytes to copy
 *
 *Return: the copied file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
