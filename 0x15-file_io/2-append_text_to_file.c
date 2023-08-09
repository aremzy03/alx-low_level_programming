#include "main.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
