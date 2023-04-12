#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *Entry  a function that appends text at the end of a fil
 *@text content-The content of the file
 *@file name-The name of the file
 *Return :charecter
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fn;

	if (!filename)
	return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);

	if (text_content)
	{
		if (write(fn, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fn);
	return (1);
}

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

