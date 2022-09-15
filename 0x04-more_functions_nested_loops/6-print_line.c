#include "main.h"

/**
 * print_line - print underscores n number of times
 * @n : number of underscores to be printed
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;
	
	for (; i < n && n > 0; i++)
	{
		_putchar('_');		
	}
	_putchar('\n');
}