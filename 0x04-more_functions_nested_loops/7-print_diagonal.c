#include "main.h"

/**
 * print_diagonal - prints backslaches diagonally
 * * @n : number of \ to be printed
 * Return: nothing
 */

void print_diagonal(int n)
{

	int i = 0, ii;

	for (; i < n && n > 0; i++)
	{
		for (ii = 0; ii < i; ii++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');

}
