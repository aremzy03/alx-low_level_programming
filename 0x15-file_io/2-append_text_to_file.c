#include "main.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
/**
 *append_text_to_file - appends a text to the end of a file
 *@filename: the name of the file to be appended
 *@text_content: the content to be appended
 *
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
