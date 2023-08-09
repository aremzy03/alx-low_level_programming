#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *create_file - creates a file and write to the file
 *@filename: the name of the file to be created
 *@text_content: the string to be written to the file
 *
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (filename == NULL)
		return (STDERR_FILENO);
	if (text_content == NULL)
		text_content = "";
	fd = fopen(filename, "w+");
	fprintf(fd, "%s", text_content);
	fclose(fd);
	return (1);
}
