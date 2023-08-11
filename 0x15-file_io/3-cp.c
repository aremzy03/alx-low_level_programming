#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 *main - reads the content of a file and writes it to another file
 *@ac: the number of files to work with
 *@av: the src file and the des file
 *
 *Return: always zero
 */
int main(int ac, char **av)
{
	int src, des, clse;
	char Buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_to file_from\n");
		exit(97);
	}
	src = open(av[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	des = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0665);
	if (des == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	while (read(src, Buff, strlen(Buff)) > 0)
	{
		write(des, Buff, strlen(Buff));
	}
	clse = close(src);
	if (clse == -1)
	{
		dprintf(STDERR_FILENO, "can't close fd %d", src);
		exit(100);
	}
	clse = close(des);
	if (clse == -1)
	{
		dprintf(STDERR_FILENO, "can't close fd %d", des);
		exit(100);
	}
	return (0);
}
