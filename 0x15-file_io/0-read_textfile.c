#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - reads a file and prints it out
 *@filename: thw name of the file
 *@letters: the amount of words to be read
 *
 *Return: the number of chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t r;
	ssize_t w;
	char *write1;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	write1 = malloc(sizeof(char) * letters);
	r = read(file, write1, letters);
	w = write(STDOUT_FILENO, write1, r);
	free(write1);
	close(file);
	return (w);
}
