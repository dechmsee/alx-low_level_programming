#include "main.h"

/**
* print_triangle - print a triangle
*
* @size: how big is the triangle
* Return: 0 TO SUCCESS
*/

void print_triangle(int size)

{
	int x, y;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y < (size - (x + 1)))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}
