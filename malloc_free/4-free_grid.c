#include "main.h"
/**
 * free_grid - frees the memory
 * @grid: pointer
 * @height: in
 * Return: void
 */
void free_grid(int **grid, int height)
{
  int i;
  for (i = 0; i < height; i++)
    {
      free(grid[i]);
    }
  free(grid);
}
