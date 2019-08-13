#include "holberton.h"

/**
* read_textfile - Read a text and prints
* @filename: file to read
* @letters: bytes to print
* Return: bytes to
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename)
	{
		char *buffer;

		buffer = malloc(sizeof(char) * letters);
		if (buffer)
		{
			ssize_t store_open, store_read, store_write;

			store_open = open(filename, O_RDONLY);
			if (store_open != -1)
			{
				store_read = read(store_open, buffer, letters);
				if (store_read != -1)
				{
					store_write = write(STDOUT_FILENO, buffer, store_read);
					if (store_write != -1)
					{
						free(buffer);
						close(store_open);
						return (store_write);
					}
				}
			}
		}

	}
	return (0);
}
