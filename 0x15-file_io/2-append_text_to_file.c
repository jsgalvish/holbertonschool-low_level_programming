#include "holberton.h"

/**
* append_text_to_file - append text to the end of file
* @filename: filename
* @text_content: text to append
* Return: -1 if append
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int store_open, store_write;
	int length;

	if (!filename)
		return (-1);
	store_open = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (store_open == -1)
		return (-1);
	if (text_content)
	{
		length = 0;
		while (text_content[length])
			length++;
		store_write = write(store_open, text_content, length);
		if (store_write == -1)
			return (-1);
	}
	close(store_open);
	return (1);
}
