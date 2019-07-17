#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - free the matrix
*@grid: the pointer
*@height: the height
*Return: Liberation of the space comrades
*/
void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
		free(grid[cont]);
	free(grid);
}
