#include "main.h"

/**
 ** _strlen - returns the length of a string.
 ** @s: input string.
 ** Return: length of a string.
 **/

int _strlen(char *s)
{
	int c = 0;
		for (; *s != '\0'; s++)
		{
		c++;
		}
		return (c);
}
