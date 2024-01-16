#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int m, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		arr[m] = (int *) malloc(sizeof(int) * width);
		if (arr[m] == NULL)
		{
			free(arr);
			for (n = 0; n <= m; n++)
				free(arr[n]);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			arr[m][n] = 0;
		}
	}
	return (arr);
}
