#include "main.h"
#include <stdio.h>

/**
 * reads a text file and prints it to the POSIX standard output
 * @letters - number of letters printed
 * @filename - is the filename
 * Returns : numbers of printed letters or 0 for fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int td;
	ssize_t trd, twr;
	char *buf;

	if (!filename)
		return (0);

	td = open(filename, O_RDONLY);

	if (td == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	trd = read(td, buf, letters);
	twr = write(STDOUT_FILENO, buf, trd);

	close(td);

	free(buf);

	return (twr);
}

