#include "holberton.h"

/**
* create_file - create and fill a file
* @filename: name of file
* @text_content: content of text
* Return: 1 if the file creates
**/

int create_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int store_open;

		store_open = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (store_open != -1)
		{
			if (text_content)
			{
				int store_write;
				int length = 0;

				while (text_content[length])
					length++;

				store_write = write(store_open, text_content, length);
				if (store_write != -1)
					return (1);
			}
			close(store_open);
			return (1);
		}
	}
	return (-1);
}
