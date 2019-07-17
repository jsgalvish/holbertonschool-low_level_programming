#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: the pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **tmp;
	int cont;
	int cont2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(int *) * height);
	if (tmp == NULL)
	{
		return (NULL);
	}

	for (cont = 0; cont < height; cont++)
	{
		tmp[cont] = malloc(width * sizeof(int));

		if (tmp[cont] == NULL)
		{
			for (cont2 = cont; cont2 >= 0; cont2--)
			{
				free(tmp[cont2]);
			}
			free(tmp);
			return (NULL);
		}
		for (cont2 = 0; cont2 <= width; cont2++)
		{
			tmp[cont][cont2] = 0;
		}
	}
	return (tmp);
}
