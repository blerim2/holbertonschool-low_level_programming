#include "main.h"

/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/

void print_line(int n)
{
	if ( n <= 0)
	{
		_putchar ('\n');
		return;
	}
	while (n--)
		_putchar ('_');
	_putchar ('_');
}
