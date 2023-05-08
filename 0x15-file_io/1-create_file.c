#include <stdio.h>
#include "main.h"

/**
 * a function that creates a file
 *  @text_content - content writen on the file
 *  @filename - filename
 *  Returns - 1 success -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int td;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	td = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (td == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(td, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(td);

	return (1);
}

