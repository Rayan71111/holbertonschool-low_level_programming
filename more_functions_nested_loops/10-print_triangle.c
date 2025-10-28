#include "main.h"

/**
 * print_triangle - prints a triangle using the character #
 * @size: size of the triangle
 *
 * Description: If size <= 0, the function prints only a new line.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}

		for (hash = 0; hash < row; hash++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
