#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 ** _strspn - Gets the length of a prefix substring.
 ** @s: The string to be searched.
 ** @accept: The prefix to be measured.
 **
 ** Return: The number of bytes in s which
 **         consist only of bytes from accept.
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					break;
			}
				if (accept[j] == '\0')
					return (i);
		}

		return (i);
}
