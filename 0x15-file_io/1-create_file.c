#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 *Entry -Create a function that creates a file
 *@text content-The contents of the file
 *@file name-the name of the file
 *Return :charecter
 */

int create_file(const char *filename, char *text_content)
{

	int cf;

	if (!filename)
	{
		return (-1);
	}

	cf = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (cf == -1)
		return (-1);

	if (text_content)
		write(cf, text_content, _strlen(text_content));

	close(cf);
	return (1);
}
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
