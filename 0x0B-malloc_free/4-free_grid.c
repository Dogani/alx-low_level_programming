#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
int **gridout;
int i, j;

if (width < 1 || height < 1)
return (NULL);

gridout = malloc(height * sizeof(int *));
if (gridout == NULL)
{
free(gridout);
return (NULL);
}

for (i = 0; i < height; i++)
{
gridout[i] = malloc(width * sizeof(int));
if (gridout[i] == NULL)
{
for (i--; i >= 0; i--)
free(gridout[i]);
free(gridout);
return (NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
gridout[i][j] = 0;

return (gridout);
}
administrator@TTCLHQISSLT030-2 0x0B-malloc_free % cat 4-free_grid.c
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}
