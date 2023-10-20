#include "main.h"

/**
 ** print_line - check for a straight line
 ** @n: h
 ** Return: Always 0.
 **/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}
	while (n--)
		_putchar ('_');
	_putchar ('\n');
}
