#include <stdio.h>
#include "main.h"

/**
 * Appends text at the end of the file
 * @text_content - the new content to file
 * @filname - the name to the file
 * Returns - 1 file exist -1 does not exist/fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int td;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	td = open(filename, O_WRONLY | O_APPEND);

	if (td == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(td, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(td);

	return (1);
}

