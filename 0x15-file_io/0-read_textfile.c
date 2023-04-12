#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * Entry - a function that reads a text file and prints it to the POSIX standard output
 * @file name is the name of the file to be read
 * @charecters number of letters to be read
 * REturns : Actual number of bytes w, 0 when fails or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
