#include "main.h"

/**
 * more_functions_nested_loops - prints a square
 * @size: length and breadth of the square
 *
 * Return: size
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		
	}
	else
	{
		_putchar('\n');
	}
}
