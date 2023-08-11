#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 *create_buffer - creates a buffer and allocates memory of 1024bytes
 *@file: file of buffer to be allocated
 *
 *Return: the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 *close_file - closes the files
 *@fd: the first file
 *@fd2: the second file
 *
 */
void close_file(int fd, int fd2)
{
	int cls, cls2;

	cls = close(fd);
	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cls2 = close(fd2);
	if (cls2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 *main - reads the content of a file and writes it to another file
 *@ac: the number of files to work with
 *@av: the src file and the des file
 *
 *Return: always zero
 */
int main(int ac, char **av)
{
	int src, des, w, r;
	char *Buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	Buff = create_buffer(av[2]);
	src = open(av[1], O_RDONLY);
	des = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(src, Buff, 1024);
	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(Buff);
			exit(98);
		}
		w = write(des, Buff, r);
		if (des == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(Buff);
			exit(99);
		}
		r = read(src, Buff, 1024);
		des = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(Buff);
	close_file(src, des);
	return (0);
}
