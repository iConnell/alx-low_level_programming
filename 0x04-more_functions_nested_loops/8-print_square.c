#include "main.h"

/**
 * print_square - prints squares
 * @n : number of # to be printed
 * Return: nothing
 */

void print_square(int n)
{

	int i = 0, ii;

	for (; i < n && n > 0; i++)
	{
		for (ii = 0; ii < n; ii++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');

}
