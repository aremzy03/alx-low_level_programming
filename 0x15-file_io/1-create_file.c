#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *create_file - creates a file and write to the file
 *@filename: the name of the file to be created
 *@text_content: the string to be written to the file
 *
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
